/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:08 by analmeid          #+#    #+#             */
/*   Updated: 2024/05/18 11:22:45 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate character in string
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s);
	while (i <= j)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
char	*strchr(const char *s, int c);
The	strchr(void) function returns a pointer to the first
 occurrence of the character c in the string s.
Here "character" means "byte"; these functions
 do not work with wide or multibyte characters.
The strchr function return a pointer to the matched character
 or NULL if the character is not found.
The terminating null byte is considered part of the string,
 so that if c is specified as '\0',
 these functions return a pointer to the terminator.
*/

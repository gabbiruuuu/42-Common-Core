/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:24 by analmeid          #+#    #+#             */
/*   Updated: 2024/05/18 12:46:42 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate a substring in a string
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/* char *strnstr(const char *big, const char *little, size_t len)
The strnstr function locates the first occurrence of the null-terminated
 string little in the string big, where not more than len characters are
 searched.
Characters that appear after a ‘\0’ character are not searched.
If little is an empty string, big is returned; if little occurs nowhere in
 big, NULL is returned; otherwise a pointer to the first character of the
 first occurrence of little is returned.*/

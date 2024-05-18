/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:23 by analmeid          #+#    #+#             */
/*   Updated: 2024/05/18 13:00:14 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (s1[i] && set[i])
	{
		while (s1[i] && ft_strchr(set, s1[i]) != NULL)
			i++;
		while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]) != NULL)
			j--;
		str = (char *)malloc(sizeof(char) * j - i + 1);
		if (!str)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	else
		str = ft_strdup(s1);
	return (str);
}

/*
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return the trimmed string or NULL if the allocation fails.

Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
 specified in ’set’ removed from the beginning and the end of the string.
*/

/* int	main(void)
{
	char	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

	printf("%s", ft_strtrim(s1, " "));
} */

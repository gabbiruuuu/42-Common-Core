/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:18:24 by analmeid          #+#    #+#             */
/*   Updated: 2024/05/18 12:50:13 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = (char)s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.

s:     The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len:   The maximum length of the substring.

Return the substring or NULL if the allocation fails.
*/

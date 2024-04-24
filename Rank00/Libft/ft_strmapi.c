/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:19:52 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/24 16:29:17 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char *ft_strmapi(char const *s, char (*f)(unsigned int, char))

s: The string on which to iterate.
f: The function to apply to each character.

Returns he string created from the successive applications of ’f’.
NULL if the allocation fails.

Applies the function f to each character of the
 string s, passing its index as the first argument
 and the character itself as the second.
A new string is created (using malloc(3)) to collect the
 results from the successive applications of f.
*/

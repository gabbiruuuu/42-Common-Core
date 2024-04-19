/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:16 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/10 12:06:43 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}

/* int	main(void)
{
	char src[] = "World";
	char dest[] = "Hello";
	printf("%d", ft_strlcpy(dest, src, 4));
	printf("\n%s", dest);
} */

/* strlcpy(char *dst, const char *src, size_t size)
The	strlcpy(void) function copy strings.
The	strlcpy(void) function copies up to size
		- 1 characters from the NUL-terminated string src
to dst, NUL-terminating the result. */

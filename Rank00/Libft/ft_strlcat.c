/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:13 by analmeid          #+#    #+#             */
/*   Updated: 2024/05/18 12:34:50 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenate string to an specific size
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	i = 0;
	j = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (dst[j] != '\0' && j < size)
	{
		j++;
	}
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (slen + dlen);
}

/* int	main(void)
{
	char	src[] = " World";
	char	dest[] = "Hello";

	printf("%i", ft_strlcat(dest, src, 9));
	printf("\n%s", dest);
} */

/* strlcat(char *dst, const char *src, size_t size)
The	strlcat(void) function concatenate strings.
The	strlcat(void) function appends the NUL-terminated string src
to the end of dst.
It will append at most size strlen(dst)-1 bytes, NUL-terminating the result.
The	strlcat(void) function return the total length of the string it
tried to create. That means the initial length of dst plus the length of src.
*/

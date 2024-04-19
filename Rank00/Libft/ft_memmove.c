/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:01 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/19 13:13:13 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copy memory area
// if(dest > src) -> from the end to avoid overwritting
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*void	*memmove(void *dest, const void *src, size_t n);
The	memmove function copies n bytes from memory area src
 to memor area dest.
The memory areas may overlap: copying takes place as though
 the bytes in src are first copied into a temporary array
 that does not overlap src or dest, and the bytes are then
 copied from the temporary array to dest.
The	memmove function returns a pointer to dest.
*/

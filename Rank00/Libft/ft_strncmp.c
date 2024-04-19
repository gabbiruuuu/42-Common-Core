/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:21 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/19 12:35:11 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare two strings
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*j;
	unsigned char	*k;

	j = (unsigned char *)s1;
	k = (unsigned char *)s2;
	i = 0;
	while ((j[i] || k[i]) && (i < n))
	{
		if (j[i] < k[i])
		{
			return (-1);
		}
		else if (j[i] > k[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strncmp("ABC", "ABC", 3));
	printf("\n%d", ft_strncmp("ABC", "AB", 2));
}*/

/*int strncmp(const char *s1, const char *s2, size_t n);
The	strncmp(void) compares only the first (at most) n bytes of s1 and s2*/

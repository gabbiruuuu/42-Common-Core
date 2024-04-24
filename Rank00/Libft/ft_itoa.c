/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:56:40 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/24 16:10:03 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h> */

static unsigned int	ft_number_size(long number)
{
	unsigned int	size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		size += 1;
	while (number != 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	long			number;

	number = n;
	size = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	str[size] = '\0';
	while (number != 0)
	{
		str[size - 1] = (number % 10) + '0';
		number = number / 10;
		size--;
	}
	return (str);
}

/* char *ft_itoa(int n);

n: the integer to convert.

Returns the string representing the integer.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

/* int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
} */

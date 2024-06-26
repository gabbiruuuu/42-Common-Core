/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:04:54 by analmeid          #+#    #+#             */
/*   Updated: 2024/06/18 12:32:38 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates memory and sets its bytes' values to 0
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	size_t	value;

	value = nmemb * size;
	if (value && (value / size) != nmemb)
		return (NULL);
	tmp = (void *)malloc(nmemb * size);
	if (!(tmp))
		return (NULL);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}

/*The calloc function allocates memory for an array of nmemb elements
of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero.
If nmemb or size is 0, then  calloc() returns either NULL,
or a unique pointer value that can later be successfully passed to	free(void).
If the multiplication of nmemb and size would result in integer overflow,
then	calloc(void) returns an error.*/

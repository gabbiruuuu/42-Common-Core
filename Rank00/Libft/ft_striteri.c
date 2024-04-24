/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:30:04 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/24 17:08:04 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void	ft_striteri(char *s, void (*f)(unsigned int, char *))

s: The string on which to iterate.
f: The function to apply to each character.

Applies the function ’f’ on each character of the string passed as argument,
 passing its index as first argument.
Each character is passed by address to ’f’ to be modified if necessary.
*/

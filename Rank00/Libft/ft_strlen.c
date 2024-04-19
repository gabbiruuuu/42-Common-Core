/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:19 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/10 12:06:43 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// calculate the length of a string
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:05:04 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/19 12:21:48 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks whether i fits into the ASCII character set
int	ft_isascii(int i)
{
	if (0 <= i && i <= 127)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:04:57 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/19 12:22:36 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks for an alphanumeric character
int	ft_isalnum(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z') || ('0' <= i
			&& i <= '9'))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_endian_16.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justasze <justasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:34:27 by justasze          #+#    #+#             */
/*   Updated: 2018/08/14 14:01:16 by justasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint16_t	rev_endian_16(uint16_t value)
{
	return ((uint16_t)(((value & (uint16_t)0xFF) << 8)
						| ((value & (uint16_t)0xFF00) >> 8)));
}

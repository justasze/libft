/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_is_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ashbury <Ashbury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 16:37:52 by Ashbury           #+#    #+#             */
/*   Updated: 2018/03/21 21:00:31 by Ashbury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_is_size(char c)
{
	return (c == 'l' || c == 'h' || c == 'z' || c == 'j');
}

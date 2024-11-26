/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:22:51 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 18:26:36 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putlnbr(long l)
{
	int	len;

	len = 0;
	if (!l)
		return (ft_putchar('0'));
	len = 0;
	if (l < 0)
	{
		len += ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
		len += ft_putinbr(l / 10);
	len += ft_putchar((l % 10) + '0');
	return (len);
}

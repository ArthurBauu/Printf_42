/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putinbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:13:06 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 18:26:41 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putinbr(int nb)
{
	long	l;
	int		len;

	if (!nb)
		return (ft_putchar('0'));
	l = nb;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:23:34 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 20:51:45 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned int	size;
	int				len;

	if (!nbr)
		return (ft_putchar('0'));
	size = ft_strlen(base);
	len = 0;
	if (nbr >= size)
		len += ft_putnbr_base(nbr / size, base);
	len += write(1, &base[nbr % size], 1);
	return (len);
}

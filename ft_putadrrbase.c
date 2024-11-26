/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrrbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:23:34 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 20:54:47 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrr_base(unsigned int nbr, char *base)
{
	unsigned int	size;
	int				num1;
	int				num2;
	int				len;

	if (!nbr || !base)
		return (ft_putchar('0'));
	len = 0;
	size = ft_strlen(base);
	ft_putstr("0x");
	len += 2;
	if (nbr >= size)
	{
		num1 = nbr / size;
		len += ft_putnbr_base((num1), base);
		num2 = nbr % size;
		len += ft_putnbr_base(num2, base);
	}
	else if (nbr < size)
		len += ft_putchar(base[nbr]);
	return (len);
}

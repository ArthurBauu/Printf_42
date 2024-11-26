/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:18:38 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 19:49:50 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define LHEXBASE "0123456789abcdef"
# define UHEXBASE "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putinbr(int nb);
int		ft_putlnbr(long l);
int		ft_putnbr_base(unsigned int nb, char *base);
int		ft_putadrr_base(unsigned int nbr, char *base);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaudou <arbaudou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:18:35 by arbaudou          #+#    #+#             */
/*   Updated: 2024/11/26 21:18:08 by arbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	char_form(const char c, va_list args)
{
	int	len;

	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		len = ft_putinbr(va_arg(args, int));
	if (c == 'u')
		len = ft_putlnbr(va_arg(args, long));
	if (c == '%')
		len = ft_putchar('%');
	if (c == 'x')
		len = ft_putnbr_base(va_arg(args, unsigned int), LHEXBASE);
	if (c == 'X')
		len = ft_putnbr_base(va_arg(args, unsigned int), UHEXBASE);
	if (c == 'p')
		len = ft_putadrr_base(va_arg(args, unsigned int), LHEXBASE);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	const char	*str = format;
	int			i;
	char		c;
	va_list		args;
	int			len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			c = str[i];
			len += char_form(c, args);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end (args);
	return (len);
}

#include <stdio.h>
int main() 
{
    char *str = "Bonjour";
    void *ptr = &str;
	int len = 0;

	// ft_printf(" %s  \n", "");
    // ft_printf("Bonjour %s, il est %u%% vous avez %i messages et il reste %d part de pizza. %c%c%c\n", "Alice", 4, -124567, 1,"A", "B", "C");

	// len = ft_printf("Bonjour %s, %cl est %u%% vous avez %i messages et il reste %d part de pizza. %c %c %c\n", "Alice", 'i', 4, -124567, 1,'A', 'B', 'C');
	// ft_printf("%u\n", len);
	// len = ft_printf("%i\n", 89846);
	// ft_printf("%u\n", len);
	// len = ft_printf("hriuhhzher%i____%s\n", 25426, "Hello world");
	// ft_printf("%u\n", len);
	// len = ft_printf("Bonjour nombre en base 16 l 154647646 : %x\n", 15467646);
	// ft_printf("%u\n", len);
	// len = ft_printf("Bonjour nombre en base 16 u 154647646 : %X\n", 15467646);
	// ft_printf("%u\n", len);
	// len = ft_printf("%p\n", ptr);
	// ft_printf("%u\n", len);
	len = ft_printf("%s%s%s%s%s", "", "", "", "", "");
	ft_printf("%u\n", len);

	// len = ft_printf("%c\n", '5');
	// ft_printf("%d\n", len);

	return 0;
}

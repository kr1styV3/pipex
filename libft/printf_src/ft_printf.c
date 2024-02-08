/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:30 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"
//#include <stdio.h>
//#include <limits.h>

int	check_format(char id, int *out, va_list ap)
{
	if (id == 'c')
		ft_putchar_out(va_arg(ap, int), out);
	else if (id == 's')
		ft_putstr_out(va_arg(ap, char *), out);
	else if (id == 'p')
		point_conversion(va_arg(ap, void *), out);
	else if (id == 'i' || id == 'd')
		ft_putnbr_out(va_arg(ap, int), out);
	else if (id == 'u')
		ft_unsigned_putnbr_out(va_arg(ap, unsigned int), out);
	else if (id == 'x')
		hex_conversion(va_arg(ap, unsigned int), out, "0123456789abcdef");
	else if (id == 'X')
		hex_conversion(va_arg(ap, unsigned int), out, "0123456789ABCDEF");
	else if (id == '%')
		ft_putchar_out('%', out);
	else
		return (-1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		out;
	int		i;
	int		check;
	va_list	ap;

	i = 0;
	out = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			check = check_format(format[i + 1], &out, ap);
			if (check == -1)
				return (out);
			i += check + 1;
		}
		else
		{
			ft_putchar_out(format[i], &out);
			i++;
		}
	}
	va_end(ap);
	return (out);
}

// int	main(void)
// {
// 	unsigned long	memory;

// 	memory = ULONG_MAX;
// 	printf("ciao funzioni da, %p %i\n", memory, 42);
// 	return (0);
// }

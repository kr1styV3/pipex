/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_binary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:40:46 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"
//#include <limits.h>
//#include <stdio.h>

void	hex_conversion(unsigned int n, int *out, char *base)
{
	if (n >= 16)
	{
		hex_conversion(n / 16, out, base);
	}
	ft_putchar_out(base[n % 16], out);
}

void	long_hex_conversion(unsigned long n, int *out, char *base)
{
	if (n >= 16)
	{
		long_hex_conversion(n / 16, out, base);
	}
	ft_putchar_out(base[n % 16], out);
}

void	point_conversion(void *ptr, int *out)
{
	unsigned long	address;
	char			*base;

	if (ptr == NULL)
		return (ft_putstr_out("(nil)", out));
	address = (unsigned long)ptr;
	base = "0123456789abcdef";
	ft_putstr_out("0x", out);
	long_hex_conversion(address, out, base);
}

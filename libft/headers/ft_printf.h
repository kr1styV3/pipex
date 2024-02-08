/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:04:31 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:59 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void	ft_putchar_out(char c, int *out);
void	ft_putstr_out(char *str, int *out);
int		ft_printf(const char *format, ...);
void	long_hex_conversion(unsigned long n, int *out, char *base);
void	hex_conversion(unsigned int n, int *out, char *base);
void	point_conversion(void *ptr, int *out);
void	ft_unsigned_putnbr_out(unsigned int n, int *out);
void	ft_putnbr_out(int n, int *out);
#endif

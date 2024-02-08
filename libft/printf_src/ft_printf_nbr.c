/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:19:50 by chrlomba          #+#    #+#             */
/*   Updated: 2024/01/14 17:19:50 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stddef.h>
#include "../headers/ft_printf.h"

void	ft_putnbr_out(int n, int *out)
{
	if (out == NULL)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_out("-2147483648", out);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_out('-', out);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_out(n / 10, out);
	}
	ft_putchar_out((n % 10) + '0', out);
}

void	ft_unsigned_putnbr_out(unsigned int n, int *out)
{
	if (out == NULL)
		return ;
	if (n >= 10)
	{
		ft_putnbr_out(n / 10, out);
	}
	ft_putchar_out((n % 10) + '0', out);
}
// int main()
// {
//     // Example usage of ft_putnbr_fd to print different numbers to stdout
//     ft_putnbr_fd(123, 1);  // Print "123"
//     ft_putchar_fd('\n', 1); // New line for readability
//     ft_putnbr_fd(-456, 1);  // Print "-456"
//     ft_putchar_fd('\n', 1); // New line for readability
//     ft_putnbr_fd(0, 1);    // Print "0"
//     ft_putchar_fd('\n', 1); // New line for readability
//     ft_putnbr_fd(2147483647, 1); // Print "2147483647" (max int value)
//     ft_putchar_fd('\n', 1);      // New line for readability
//     ft_putnbr_fd(-2147483648, 1); // Print "-2147483648" (min int value)
//     ft_putchar_fd('\n', 1);       // New line for readability
//     return 0;
// }

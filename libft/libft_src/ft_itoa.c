/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:37:09 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:45 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static int	intlen(int number)
{
	int		i;

	i = 0;
	if (number < 10)
		return (1);
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

static char	*neg_check_allocation(int *number, int *i)
{
	char	*allocated_string;

	allocated_string = NULL;
	if (*number < 0)
	{
		*number *= -1;
		allocated_string = (char *)ft_calloc(intlen(*number) + 2, sizeof(char));
		allocated_string[0] = '-';
		*i = intlen(*number);
	}
	else if (*number > 0)
	{
		allocated_string = (char *)ft_calloc(intlen(*number) + 1, sizeof(char));
		(*i)--;
	}
	else if (*number == 0)
	{
		allocated_string = (char *)ft_calloc(2, sizeof(char));
		allocated_string[0] = '0';
	}
	if (!allocated_string)
		return (NULL);
	return (allocated_string);
}

char	*ft_itoa(int number)
{
	char	*number_holder;
	int		i;

	i = intlen(number);
	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	number_holder = neg_check_allocation(&number, &i);
	if (!number_holder)
		return (NULL);
	while (number > 0)
	{
		number_holder[i] = number % 10 + 48;
		number /= 10;
		i--;
	}
	return (number_holder);
}

// int	main(void)
// {
// 	char	*str;
// 	int		num;

// 	str = ft_itoa(2147483);
// 	printf("itoa fa :%s\number", str);
// 	free(str);
// }

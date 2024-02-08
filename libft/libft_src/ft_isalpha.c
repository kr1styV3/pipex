/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:07:53 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:48 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_isalpha(int chr)
{
	if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))
		return (1024);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	int		i;
	int		val;

	i = 1;
	while (i <= ac - 1)
	{
		val = ft_isalpha(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = isalpha(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/

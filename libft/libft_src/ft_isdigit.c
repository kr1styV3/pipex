/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:33:16 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:46 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_isdigit(int chr)
{
	if ((chr >= '0' && chr <= '9'))
		return (2048);
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
		val = ft_isdigit(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = isdigit(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/

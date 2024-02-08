/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:07:03 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:48 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_isalnum(int chr)
{
	if (ft_isalpha(chr) || ft_isdigit(chr))
		return (8);
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
		val = ft_isalnum(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = isalnum(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/

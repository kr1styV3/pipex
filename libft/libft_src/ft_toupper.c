/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:39:15 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:21 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		chr -= 32;
	return (chr);
}
/*
int	main(int ac, char **av)
{
	int		i;
	int		val;

	i = 1;
	while (i <= ac - 1)
	{
		val = ft_toupper(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = toupper(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:45:55 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:23 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 32;
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
		val = ft_tolower(av[i][0]);
		printf("il valore del mio ft_\t%i\n", val);
		val = tolower(av[i][0]);
		printf("il valore del NON mio ft_\t%i\n", val);
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:42:21 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:47 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_isascii(int chr)
{
	if (chr >= 0 && chr <= 127)
		return (1);
	else
		return (0);
}

// int	main(int ac, char **av)
// {
// 	int		i;
// 	int		val;

// 	i = 1;
// 	while (i <= ac - 1)
// 	{
// 		val = ft_isascii(av[i][0]);
// 		printf("il valore del mio ft_\t%i\n", val);
// 		val = isascii(av[i][0]);
// 		printf("il valore del NON mio ft_\t%i\n", val);
// 		i++;
// 	}
// }

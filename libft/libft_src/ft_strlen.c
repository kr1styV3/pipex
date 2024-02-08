/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:17:08 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:28 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(int ac, char **av)
{
	int					i;
	size_t				k;

	i = 0;
	while (i < ac - 1)
	{
		k = ft_strlen(av[i]);
		printf("il mio ft_\t%li\n", k);
		k = strlen(av[i]);
		printf("il NON MIO ft_\t%li\n", k);
		i++;
	}
}
*/

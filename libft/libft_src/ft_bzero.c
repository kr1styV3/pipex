/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:31:36 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_bzero(void *str, size_t n_bytes)
{
	ft_memset(str, '\0', n_bytes);
}
/*
int	main(void)
{
	size_t	n;
	char	s[] = "ciao pasquale";
	char	x[] = "ciao pasquale";

	n = 5;
	ft_bzero(s, n);
	printf("il mio ft_\t%s\n", s);
	bzero(x, n);
	printf("il NON mio ft_\t%s\n", x);
}
*/

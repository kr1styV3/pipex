/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:28:22 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:37 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memset(void *src, int charset, size_t n_bytes)
{
	unsigned char	*src_holder;

	src_holder = (unsigned char *)src;
	while (n_bytes--)
		*src_holder++ = (unsigned char )charset;
	return (src);
}
/*
int	main(void)
{
	size_t	n;
	char	s[] = "ciao pasquale";
	char	x[] = "ciao pasquale";
	int		cons;
	int		i;

	n = 5;
	cons = 'a';
	i = 0;
	while (i < 1)
	{
		ft_memset(s, cons, n);
		printf("il mio ft_\t%s\n", s);
		memset(x, cons, n);
		printf("il NON mio ft_\t%s\n", s);
		i++;
	}
	return (0);
}
*/

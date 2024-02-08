/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:13:49 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:31 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}

// char	*putword(unsigned int i, char *ch)
// {
// 	ch[i] = 'p';
// 	return (ch);
// }

// int	main(void)
// {
// 	char	s[100] = "laske tämä hei banaanit aliravitut 
//jotka haisevat japanilaisilta kanalta makedonialaisella tavalla";
// 	ft_striteri(s, putword);
// 	for(int i = 0; i < 73; i++)
// 		printf ("tmp[%i] = %c\n", i, s[i]);
// 	return (0);
// }

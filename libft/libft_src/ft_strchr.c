/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:48:35 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:33 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strchr(const char *str, int charset)
{
	unsigned char				charset_holder;

	charset_holder = (unsigned int)charset;
	while (*str != '\0')
	{
		if (*str == charset_holder)
			return ((char *)str);
		str++;
	}
	if (charset_holder == '\0')
		return ((char *)str);
	return (NULL);
}

// int		main(void)
// {
// 	const char	*c = "ciao pasquale";
// 	//int		d = 'o';
// 	int		x = 112;
// 	printf("add is : %p\n", c);
// 	ft_strchr(c, x);
// 	printf("il mio coso prima di patire fa :%s\n e il add : %p \n", c, c);
// 	//strchr(c, d);
// 	//printf("il suo coso fa :%s\n e il add : %p \n", c, c);
// }

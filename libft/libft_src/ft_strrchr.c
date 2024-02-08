/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:35:40 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:25 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strrchr(const char *str, int charset)
{
	const char		*last_occurrence;

	last_occurrence = NULL;
	if (charset == '\0')
	{
		while (*str != '\0')
			str++;
		return ((char *)str);
	}
	while (*str != '\0')
	{
		if (*str == (char)charset)
			last_occurrence = str;
		str++;
	}
	return ((char *)last_occurrence);
}

// int		main(void)
// {
// 	const char	*c = "ciao pasquale";
// 	int		x = 112;
// 	printf("add is : %p\n", c);
// 	ft_strchr(c, x);
// 	printf("il mio coso prima di patire fa :%s\n e il add : %p \n", c, c);
// }

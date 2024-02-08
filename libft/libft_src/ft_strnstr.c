/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:09:20 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:26 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n_bytes)
{
	size_t	i;
	size_t	substr_counter;
	size_t	substr_len;

	i = 0;
	substr_len = ft_strlen(substr);
	if (substr_len == 0)
		return ((char *)str);
	while (i < n_bytes && str[i] != '\0')
	{
		substr_counter = 0;
		if (str[i] == substr[substr_counter])
		{
			while (str[i + substr_counter] == substr[substr_counter]
				&& (i + substr_counter) < n_bytes)
			{
				substr_counter++;
				if (substr[substr_counter] == '\0')
					return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *s1 = "ciao pasquale  ";
// 	const char *s2 = "";
// 	char *res = ft_strnstr(s1, s2, 14);
// 	printf ("il mio coso fa \t%s\n",res);
// }

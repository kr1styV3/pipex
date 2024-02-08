/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:38:34 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:27 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!tmp)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

// char	putword(unsigned int i, char ch)
// {
// 	ch = i + 101;
// 	return (ch);
// }

// int	main(void)
// {
// 	char	s[4] = "ciao";
// 	char *tmp = ft_strmapi(s, putword);
// 	for(int i = 0; i < 4; i++)
// 		printf ("tmp[%i] = %c\n", i, tmp[i]);
// 	free(tmp);
// }

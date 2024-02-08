/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:29 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:24 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_string = (char *)malloc(len + 1 * sizeof(char));
	if (!sub_string)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub_string[j] = s[i];
			j++;
		}
		i++;
	}
	sub_string[len] = '\0';
	return (sub_string);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:51:38 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:25 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static int	is_charset(const char str, const char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == str)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *charset)
{
	char	*trimmed_str;
	size_t	trimmed_length;

	while (*str && is_charset(*str, charset))
		str++;
	trimmed_length = ft_strlen(str);
	while (trimmed_length > 0 && is_charset(str[trimmed_length - 1], charset))
		trimmed_length--;
	trimmed_str = malloc((trimmed_length + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	trimmed_str[trimmed_length] = '\0';
	while (trimmed_length > 0)
	{
		trimmed_str[trimmed_length - 1] = str[trimmed_length - 1];
		trimmed_length--;
	}
	return (trimmed_str);
}

int	main(void)
{
	const char *str = "   ciao pasqualeitos                                       ";
	const char *charset = " ";
	char	*trimmed = ft_strtrim(str, charset);
	printf("la mia stringa diventa:\n%s", trimmed);
	free(trimmed);
}

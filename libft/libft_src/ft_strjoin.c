/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:12:42 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:30 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static void	copy_chars(char *dest, const char *src,
		size_t *dest_counter, size_t src_len)
{
	size_t	i;

	i = 0;
	while (i < src_len)
	{
		dest[*dest_counter] = src[i];
		(*dest_counter)++;
		i++;
	}
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t		new_str_counter;
	size_t		str1_len;
	size_t		str2_len;
	char		*new_str;

	if (!str1 && !str2)
		return (NULL);
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	new_str = malloc(((str1_len + str2_len) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str_counter = 0;
	if (str1)
		copy_chars(new_str, str1, &new_str_counter, str1_len);
	if (str2)
		copy_chars(new_str, str2, &new_str_counter, str2_len);
	new_str[new_str_counter] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char *s1 = "ciao";
// 	char *s2 = " pasquale";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf ("%s",s3);
// 	free(s3);
// }

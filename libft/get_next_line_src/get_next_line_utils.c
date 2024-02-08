/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:39:56 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:57 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/get_next_line.h"

char	*ft_strdup_with_free(char **s)
{
	char	*str_copy;
	size_t	str_len;

	str_len = ft_strlen_m(*s);
	str_copy = malloc((str_len + 1) * sizeof(char));
	if (!str_copy)
		return (NULL);
	while (str_len--)
		str_copy[str_len] = (*s)[str_len];
	str_len = ft_strlen_m(*s);
	str_copy[str_len] = '\0';
	free(*s);
	*s = NULL;
	return (str_copy);
}

char	*ft_strdup_m(char *s)
{
	char	*buf;
	char	*original_buf;

	buf = malloc(ft_strlen_m(s) + 1);
	if (buf == NULL)
		return (NULL);
	original_buf = buf;
	while (s && *s)
		*buf++ = *s++;
	*buf = '\0';
	return (original_buf);
}

char	*ft_substr_m(char *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (len > ft_strlen_m(s + start))
		len = ft_strlen_m(s + start);
	if (len == 0)
		return (NULL);
	sub_string = (char *)malloc(len + 1 * sizeof(char));
	if (!sub_string)
		return (NULL);
	while (s && s[i])
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

char	*ft_strjoin_m(char **s1, char *s2)
{
	char	*res;
	int		len;
	int		i;
	int		j;
	int		s1_len;

	if (s2[0] == '\0')
		return (ft_strdup_with_free(s1));
	s1_len = ft_strlen_m(*s1);
	len = s1_len + ft_strlen_m(s2) + 1;
	res = malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (*s1 && i < s1_len)
		res[i++] = (*s1)[j++];
	j = 0;
	while (s2 && i < len)
		res[i++] = s2[j++];
	free(*s1);
	*s1 = NULL;
	return (res);
}

size_t	ft_strlen_m(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
		i++;
	return (i);
}

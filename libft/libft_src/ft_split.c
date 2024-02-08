/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:53:55 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:33 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			num_words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (num_words);
}

static int	next_occurence(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strdupe(char *str, char c)
{
	int		i;
	int		word_len;
	char	*tmp;

	i = 0;
	word_len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		word_len++;
	}
	tmp = malloc((word_len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static void	free_split(char **split)
{
	int	i;

	if (split)
	{
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}

char	**ft_split(char const *s, char c)
{
	int		counter_str;
	int		counter_mtx;
	int		mtx_len;
	char	**splitted_str;

	if (!s)
		return (NULL);
	mtx_len = count_words(s, c);
	splitted_str = malloc((mtx_len + 1) * sizeof(char *));
	if (!splitted_str)
		return (NULL);
	counter_str = 0;
	counter_mtx = 0;
	while (counter_mtx < mtx_len)
	{
		while (s[counter_str] == c)
			counter_str++;
		splitted_str[counter_mtx] = ft_strdupe((char *)&s[counter_str], c);
		if (!splitted_str[counter_mtx])
			return (free_split(splitted_str), NULL);
		counter_mtx++;
		counter_str += next_occurence((char *)&s[counter_str], c);
	}
	splitted_str[counter_mtx] = NULL;
	return (splitted_str);
}

// int main(void)
// {
//     const char s[] = ",,,,pasquale,,,spero,tu
//						,,veda,,,proprio,,,questa,stringa";
//     char c = ',';
//     char **split = ft_split(s, c);
//     if (!split)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     for (int i = 0; split[i] != NULL; i++)
//         printf("il [%i] della matrice e : %s\n", i, split[i]);

//     // Free memory for each element before freeing the array
//     for (int i = 0; split[i] != NULL; i++)
//         free(split[i]);
//     free(split);

//     return 0;
// }

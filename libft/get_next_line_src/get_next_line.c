/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:17:30 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:56 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/get_next_line.h"

int	check_buffer(char *buffer, int *i)
{
	while (buffer[*i] != '\0')
	{
		if (buffer[*i] == '\n')
			return (1);
		(*i)++;
	}
	return (0);
}

char	*handle_end_of_file(char **rimane, char *buffer, int read_bytes)
{
	char	*temp;

	temp = NULL;
	if (*rimane != NULL)
	{
		buffer[read_bytes] = '\0';
		if (read_bytes == 0)
		{
			temp = process_buffer(rimane, buffer);
			if (temp == NULL)
				temp = ft_strdup_with_free(rimane);
		}
		else
			temp = process_buffer(rimane, buffer);
	}
	else
	{
		if (read_bytes == 0 || read_bytes == -1)
			return (NULL);
		buffer[read_bytes] = '\0';
		temp = process_buffer(rimane, buffer);
	}
	return (temp);
}

char	*handle_read(char **rimane, char *buffer)
{
	char	*tmp;

	if (*rimane)
		tmp = ft_strjoin_m(rimane, buffer);
	else
		tmp = ft_strdup_m(buffer);
	return (tmp);
}

char	*process_buffer(char **rimane, char *buffer)
{
	char	*line;
	char	*temp;
	int		i;

	i = 0;
	line = handle_read(rimane, buffer);
	temp = NULL;
	if (!line || check_buffer(line, &i) == 1)
	{
		*rimane = ft_substr_m(line, i + 1, ft_strlen_m(line));
		temp = ft_substr_m(line, 0, i + 1);
	}
	else
		*rimane = ft_substr_m(line, 0, i);
	free(line);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char		*rimane = NULL;
	char			*buffer;
	int				read_bytes;
	char			*temp;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
		return (NULL);
	read_bytes = 1;
	temp = NULL;
	while (temp == NULL && read_bytes != 0 && read_bytes != -1)
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (NULL);
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < BUFFER_SIZE)
			temp = handle_end_of_file(&rimane, buffer, read_bytes);
		else
		{
			buffer[read_bytes] = '\0';
			temp = process_buffer(&rimane, buffer);
		}
		free(buffer);
	}
	return (temp);
}

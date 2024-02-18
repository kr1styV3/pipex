/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:07:16 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/09 14:57:12 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	parse_data(t_pipex *data, char **argv, char **envp)
{
	data->infile = ft_strdup(argv[1]);
	if (!data->infile)
		malloc_error(data);
	data->outfile = ft_strdup(argv[4]);
	if (!data->outfile)
		malloc_error(data);
	data->cmd1 = ft_split(argv[2], ' ');
	if (!data->cmd1)
		malloc_error(data);
	data->cmd2 = ft_split(argv[3], ' ');
	if (!data->cmd2)
		malloc_error(data);
	data->fd_input = open(data->infile, O_RDONLY);
	if (data->fd_input < 0)
		invalid_file(data, data->infile);
	data->fd_output = open(data->outfile, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (data->fd_output < 0)
		invalid_file(data, data->outfile);
	data->paths = get_paths(envp);
}

char	**get_paths(char **envp)
{
	int		i;
	char	*path;
	char	**paths;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path = ft_strdup(envp[i] + 5);
			paths = ft_split(path, ':');
			free(path);
			return (paths);
		}
		i++;
	}
	return (NULL);
}

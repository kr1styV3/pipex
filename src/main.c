/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:05:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 21:17:17 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"
#include <sys/wait.h>

int	main(int argc, char **argv, char **envp)
{
	char		*child_path;
	char		*parent_path;
	t_pipex		*data;

	data = ft_start(argc, argv, envp);
	child_path = find_path(data->paths, data->cmd2[0]);
	if (child_path == NULL)
		path_error(data, child_path);
	parent_path = find_path(data->paths, data->cmd1[0]);
	if (parent_path == NULL)
	{
		free(parent_path);
		path_error(data, child_path);
	}
	if (pipe(data->pipe) == -1)
		pipe_error(data);
	exec(data, child_path, parent_path, envp);
	free(child_path);
	free(parent_path);
	ft_free_data_struct(data);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:06:15 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/20 21:15:06 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"
#include <sys/wait.h>

void	exec(t_pipex *data, char *child_path, char *parent_path, char **envp)
{
	data->pid1 = fork();
	if (data->pid1 == -1)
		fork_error(data);
	else if (data->pid1 == 0)
	{
		child_process(data, envp, child_path);
	}
	data->pid2 = fork();
	if (data->pid2 == -1)
		fork_error(data);
	else if (data->pid2 == 0)
	{
		waitpid(data->pid1, NULL, 0);
		parent_process(data, envp, parent_path);
	}
}

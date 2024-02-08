/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parent_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:18:17 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 19:27:58 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"
#include <sys/wait.h>

void	parent_process(t_pipex *data, char **envp)
{
	waitpid(data->pid, NULL, 0);
	dup2(data->fd_output, STDOUT_FILENO);
	close(data->pipe[1]);
	dup2(data->pipe[0], STDIN_FILENO);
	close(data->pipe[0]);
	execve(data->cmd2[0], data->cmd2, envp);
	invalid_cmd(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parent_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:18:17 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/18 22:11:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	parent_process(t_pipex *data, char **envp, char *path)
{
	close(data->pipe[1]);
	dup2(data->pipe[0], STDIN_FILENO);
	dup2(data->fd_output, STDOUT_FILENO);
	close(data->pipe[0]);
	execve(path, data->cmd1, envp);
}

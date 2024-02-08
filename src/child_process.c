/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:16:42 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 19:27:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	child_process(t_pipex *data, char **envp)
{
	dup2(data->fd_input, STDIN_FILENO);
	close(data->pipe[0]);
	dup2(data->pipe[1], STDOUT_FILENO);
	close(data->pipe[1]);
	execve(data->cmd1[0], data->cmd1, envp);
	invalid_cmd(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:05:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 22:46:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	main(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	data = ft_start(argc, argv, envp);
	if (pipe(data->pipe) == -1)
		pipe_error(data);
	data->pid = fork();
	if (data->pid == -1)
		fork_error(data);
	else if (data->pid == 0)
		child_process(data, envp);
	else
		parent_process(data, envp);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:48:39 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 13:50:05 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	arg_error(void)
{
	ft_printf("Error: Invalid arguments\n");
	ft_printf("Usage: ./pipex infile cmd1 | cmd2 outfile\n");
	exit(1);
}

void	malloc_error(t_pipex *data)
{
	ft_printf("Error: Malloc failed\n");
	ft_free_data_struct(data);
	exit(1);
}

void	invalid_file(t_pipex *data, char *file)
{
	ft_printf("Error: Invalid file (%s)\n", file);
	ft_free_data_struct(data);
	exit(1);
}

void	invalid_cmd(t_pipex *data)
{
	ft_printf("Error: Invalid command (%s)\n", data->cmd1[0]);
	ft_free_data_struct(data);
	exit(1);
}

void	pipe_error(t_pipex *data)
{
	ft_printf("Error: Pipe failed\n");
	ft_free_data_struct(data);
	close(data->pipe[0]);
	close(data->pipe[1]);
	exit(1);
}

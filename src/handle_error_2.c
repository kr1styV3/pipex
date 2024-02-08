/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:54:32 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 22:51:27 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	fork_error(t_pipex *data)
{
	ft_printf("Error: Fork failed\n");
	ft_free_data_struct(data);
	close(data->pipe[0]);
	close(data->pipe[1]);
	exit(1);
}

void	execve_error(t_pipex *data)
{
	ft_printf("Error: execve error\n");
	ft_free_data_struct(data);
	close(data->pipe[0]);
	close(data->pipe[1]);
	exit(1);
}

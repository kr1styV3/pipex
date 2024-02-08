/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:01:54 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 21:15:52 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

void	ft_free_data_struct(t_pipex *data)
{
	free(data->infile);
	free(data->outfile);
	free(data->path);
	ft_free_2d(data->cmd1);
	ft_free_2d(data->cmd2);
	close(data->fd_input);
	close(data->fd_output);
	free(data);
}

void	ft_free_2d(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

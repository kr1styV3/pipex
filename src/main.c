/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:05:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 01:22:37 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	main(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	data = ft_start(argc, argv, envp);
	ft_printf("path : (%s)\n", data->path);
	return (0);
}

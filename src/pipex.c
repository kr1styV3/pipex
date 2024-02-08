/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:05:17 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 21:02:40 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

t_pipex	*ft_start(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	if (handle_args(argc) == 0)
		arg_error();
	data = malloc(sizeof(t_pipex));
	if (!data)
		malloc_error(data);
	parse_data(data, argv, envp);
	return (data);
}

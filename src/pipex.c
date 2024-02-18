/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:05:17 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/18 15:54:49 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

t_pipex	*ft_start(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	if (handle_args(argc, argv) == 0)
		arg_error();
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
		arg_error();
	data = malloc(sizeof(t_pipex));
	if (!data)
		malloc_error(data);
	parse_data(data, argv, envp);
	return (data);
}

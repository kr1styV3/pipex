/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:45:54 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/18 19:40:47 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

int	cmd_control(char **argv)
{
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
		return (0);
	if (argv[2] == NULL || argv[3] == NULL)
		return (0);
	return (1);
}

int	handle_args(int argc, char **argv)
{
	if (argc == 5)
	{
		if (cmd_control(argv) == 1)
			return (1);
	}
	arg_error();
	return (0);
}

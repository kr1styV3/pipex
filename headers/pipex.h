/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:08:05 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/08 15:26:25 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/headers/ft_printf.h"
# include "../libft/headers/get_next_line.h"
# include "../libft/headers/libft.h"
# include <fcntl.h>
# include <sys/types.h>

typedef struct s_pipex
{
	char	*infile;
	char	*outfile;
	char	**cmd1;
	char	**cmd2;
	char	*path;
	int		pipe[2];
	int		fd_input;
	int		fd_output;
	pid_t	pid;
}		t_pipex;

// handle_args
int		handle_args(int argc);

// handle_free
void	ft_free_data_struct(t_pipex *data);
void	ft_free_2d(char **arr);

// handle_exit
void	arg_error(void);
void	malloc_error(t_pipex *data);
void	invalid_file(t_pipex *data, char *file);
void	invalid_cmd(t_pipex *data);
void	pipe_error(t_pipex *data);
void	fork_error(t_pipex *data);

// parsing
void	parse_data(t_pipex *data, char **argv, char **envp);
char	*get_path(char **envp);

// pipex
t_pipex	*ft_start(int argc, char **argv, char **envp);

// child_process
void	child_process(t_pipex *data);

// parent_process
void	parent_process(t_pipex *data);

#endif

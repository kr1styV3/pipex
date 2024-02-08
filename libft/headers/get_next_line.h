/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:19:05 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:59 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*get_next_line(int fd);
char		*process_buffer(char **rimane, char *buffer);
char		*ft_substr_m(char *s, unsigned int start, size_t len);
char		*ft_strjoin_m(char **s1, char *s2);
char		*ft_strdup_m(char *str);
char		*ft_strdup_with_free(char **s);
char		*handle_read(char **rimane, char *buffer);
size_t		ft_strlen_m(const char *s);
int			check_buffer(char *buffer, int *i);

#endif
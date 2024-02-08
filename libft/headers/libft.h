/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:00:07 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *number_str);
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);
int		ft_lstsize(t_list *lst);
int		ft_memcmp(const void *src1, const void *src2, size_t n_bytes);
int		ft_strncmp(const char *str, const char *cmp, size_t n_bytes);
void	ft_bzero(void *str, size_t n_bytes);
void	*ft_calloc(size_t num_elems, size_t byte_size);
void	*ft_memchr(const void *src, int charset, size_t n_bytes);
void	*ft_memcpy(void *dest, const void *src, size_t n_bytes);
void	*ft_memmove(void *dest, const void *src, size_t n_bytes);
void	*ft_memset(void *src, int charset, size_t n_bytes);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int charset);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strnstr(const char *str, const char *substr, size_t n_bytes);
char	*ft_strrchr(const char *str, int charset);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *));

#endif // LIBFT_H

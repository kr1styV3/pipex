/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:59:13 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:49 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_calloc(size_t num_elems, size_t byte_size)
{
	char	*alloc_ptr;

	alloc_ptr = malloc(num_elems * byte_size);
	if (!alloc_ptr)
		return (NULL);
	else
		ft_bzero(alloc_ptr, num_elems * byte_size);
	return (alloc_ptr);
}

// int main(void)
// {
//     char *arr = (char *)ft_calloc(10, sizeof(char));
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0; i < 100; i++) {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }

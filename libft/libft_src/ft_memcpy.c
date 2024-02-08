/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:11:19 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/07 17:11:38 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n_bytes)
{
	unsigned char		*dest_tmp;
	const unsigned char	*src_tmp;

	if (!dest && !src)
		return (NULL);
	dest_tmp = (unsigned char *)dest;
	src_tmp = (const unsigned char *)src;
	while (n_bytes--)
		*dest_tmp++ = *src_tmp++;
	return (dest);
}
/*
int	main(void)
{
	const char *src = "ciao pasquale";
	char dest[13];
	char dst[13];
	size_t n = 13;

	ft_memcpy(dest, src, n);
	dest[n] = '\0';
	printf("my ft_\t%s", dest);
	memcpy(dst, src, n);
	dst[n] = '\0';
	printf("\nhis ft_\t%s", dst);
}
*/

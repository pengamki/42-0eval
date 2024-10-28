/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:21:38 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/26 18:09:46 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			ctr;

	if (dst == NULL && src == NULL)
		return (dst);
	dst_ptr = (unsigned char *) dst;
	src_ptr = (unsigned char *) src;
	ctr = 0;
	if (dst_ptr > src_ptr)
		while (len-- > 0)
			*(dst_ptr + len) = *(src_ptr + len);
	else
		while (ctr++ < len)
			*(dst_ptr++) = *(src_ptr++);
	return (dst);
}

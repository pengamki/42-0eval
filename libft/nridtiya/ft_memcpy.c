/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:21:42 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 17:21:43 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest_ptr;
	unsigned char	*tmp_src_ptr;

	if (!dest && !src)
		return (NULL);
	tmp_dest_ptr = (unsigned char *) dest;
	tmp_src_ptr = (unsigned char *) src;
	while (n > 0)
	{
		*tmp_dest_ptr = *tmp_src_ptr;
		tmp_dest_ptr++;
		tmp_src_ptr++;
		n--;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[10] = "abcdef";
// 	char *t = src;

// 	printf("%s \n", ft_memcpy(t+2, NULL, 3));
// }
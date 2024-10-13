/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:57:21 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 23:57:23 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	i = dst_len;
	j = 0;
	while (i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
// #include <stdio.h>

// int main(){
// 	char dst[10] = "123456";
// 	char *src = "abcd";

// 	printf("%zu\n",ft_strlcat(dst, src, 20));
// 	printf("%s", dst);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:01:33 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 23:01:35 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (size <= 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>

// int main(){
// 	char dst[10];
// 	char src[] = "concou";

// 	memset(dst, 'A', 10);

// 	printf("%zu\n",ft_strlcpy(dst, src, 0));
// 	printf("%s", dst);
// }
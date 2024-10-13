/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:46:33 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 18:46:36 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest_ptr;
	unsigned char	*tmp_src_ptr;

	tmp_dest_ptr = (unsigned char *) dest;
	tmp_src_ptr = (unsigned char *) src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			tmp_dest_ptr[n] = tmp_src_ptr[n];
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char test[20] = "abcdefght";
// 	char *t = test;

// 	printf("%s", ft_memmove(t + 2, t, 3));
// }
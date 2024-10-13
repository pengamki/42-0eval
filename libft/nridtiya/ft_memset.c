/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:35:30 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 15:35:32 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr) = (unsigned char) c;
		tmp_ptr++;
		n--;
	}
	return (s);
}
// #include <stdio.h>

// int main()
// {
// 	unsigned char test[4] = "abcd";
// 	printf("%s", ft_memset(&test, 'z', 2));
// }
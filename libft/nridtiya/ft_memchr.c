/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:42:58 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 15:22:46 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	temp_c;
	unsigned char	*temp_s;

	temp_c = (unsigned char) c;
	temp_s = (unsigned char *) s;
	while (n > 0)
	{
		if (temp_c == *temp_s)
			return ((void *) temp_s);
		temp_s++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *s =  "sdfesr";
// 	printf("%p\n", s);
// 	printf("%p\n", s+5);
// 	printf("%p", ft_memchr(s, 'r', 6));
// }

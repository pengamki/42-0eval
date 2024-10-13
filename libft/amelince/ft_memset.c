/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:24:19 by amelince          #+#    #+#             */
/*   Updated: 2024/09/07 23:35:56 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;

	arr = s;
	while (n)
	{
		*arr = (unsigned char)c;
		arr++;
		n--;
	}
	return (s);
}

// int main(void)
// {
// 	char str[5];
// 	ft_memset(str, 'A', 5);
// 	printf("%s", str);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 06:26:34 by am                #+#    #+#             */
/*   Updated: 2024/09/08 20:23:41 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*str;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*str == uc)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char s[26] = "lets see if we can find c";
// 	int c = 'c';
// 	char *ptr;

// 	ptr = ft_memchr(s, c, 26);
// 	printf("%s\n", ptr);
// }

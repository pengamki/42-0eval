/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:38:08 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 16:36:18 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i_d;
	size_t	i_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i_d = len_d;
	i_s = 0;
	if (!size || len_d >= size)
		return (size + len_s);
	while (src[i_s] && i_d < (size - 1))
	{
		dst[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dst[i_d] = '\0';
	return (len_d + len_s);
}

// int main(void)
// {
// 	char arr[3] = "Anton";
// 	char destination[] = "Does it work?";
// 	const char source[] = " YES, it works!";
// 	size_t r;

// 	r = ft_strlcat(destination, source, 14);
// 	printf("%s\nreturn ft_strlcat: %zu\n", destination, r);

// }

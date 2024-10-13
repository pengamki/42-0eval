/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:01:52 by amelince          #+#    #+#             */
/*   Updated: 2024/09/08 00:50:57 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (size > 1 && src[i])
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char destination[13];
// 	const char source[13] = "Does it work?";

// 	size_t len_src = ft_strlcpy(destination, source, 13);
// 	printf("%s\nreturn strlcpy: %zu\n", destination, len_src);
// }

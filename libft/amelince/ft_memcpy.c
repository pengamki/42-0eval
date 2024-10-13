/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:33:20 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 23:44:54 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*arr_dest;
	const unsigned char	*arr_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	arr_src = src;
	arr_dest = dest;
	while (n)
	{
		*arr_dest = *arr_src;
		arr_dest++;
		arr_src++;
		n--;
	}
	return (dest);
}

// int main(void)
// {
// 	char d[] = "?!";
// 	const char *s = ":)";

// 	ft_memcpy(d, s, sizeof(char) * 2);

// 	printf("%s\n", d);
// }

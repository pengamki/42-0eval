/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:41:16 by am                #+#    #+#             */
/*   Updated: 2024/09/11 19:42:49 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	if (str1[i] > str2[i])
		return (1);
	return (-1);
}

// int main(void)
// {
// 	char *s1 = "checka";
// 	char *s2 = "checky";

// 	printf("%i\n", ft_memcmp(s1, s2, 6));
// }

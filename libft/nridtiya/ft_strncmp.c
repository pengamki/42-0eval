/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:27:12 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 01:27:15 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *s1 = "ABC";
// 	const char *s2 = "ABY"; 

// 	printf("%d", ft_strncmp(s1, s2, 4));
// }
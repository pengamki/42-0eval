/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:23:34 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 15:23:37 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	if (n == 0)
		return (0);
	i = 0;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	while (temp_s1[i] == temp_s2[i] && i < (n - 1))
		i++;
	return (temp_s1[i] - temp_s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	printf("%d", ft_memcmp(s2, s3, 4));
// }
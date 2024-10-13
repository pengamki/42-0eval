/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: am <am@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 05:16:49 by am                #+#    #+#             */
/*   Updated: 2024/09/08 06:26:02 by am               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	const char str1[7] = "checka";
// 	const char str2[7] = "checkb";
// 	int r = ft_strncmp(str1, str2, 5);
// 	printf("%i\n", r);
// }

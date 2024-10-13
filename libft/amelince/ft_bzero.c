/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:43:47 by amelince          #+#    #+#             */
/*   Updated: 2024/09/07 23:34:40 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr_s;
	size_t			i;

	arr_s = s;
	i = 0;
	while (i < n)
	{
		arr_s[i] = '\0';
		i++;
	}
}

// int main(void)
// {
// 	char arr[] = "Does it work?";
// 	ft_bzero(arr, 12);
// 	printf("%s\n", arr + 12);
// }

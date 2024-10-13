/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:39:57 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 15:39:59 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*little == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
			j++;
		if (little[j] == '\0' && ((i + j) <= len))
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <bsd/bsd.h>
// int	main()
// {
// 	const char *big =  "sdfesr";
// 	const char *little = "sr";
// 	printf("%p\n", big);
// 	printf("%p\n", big + 5);
// 	printf("%p", ft_strnstr(big, little, 6));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 00:42:53 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 00:42:56 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = c;
	if (char_c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == char_c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *s =  "sdfer";
// 	printf("%p\n", s);
// 	printf("%p\n", s+5);
// 	printf("%p", ft_strchr(NULL, '\0'));
// }

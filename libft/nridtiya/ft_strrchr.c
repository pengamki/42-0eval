/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:18:40 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 01:18:42 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ptr;
	char	char_c;

	char_c = (char) c;
	if ((char_c) == '\0')
		return ((char *)(s + ft_strlen(s)));
	last_ptr = NULL;
	while (*s)
	{
		if (*s == char_c)
			last_ptr = (char *) s;
		s++;
	}
	return (last_ptr);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *s =  "tripouille";
// 	printf("%p\n", s);
// 	printf("%p\n", s+5);
// 	printf("%p", ft_strrchr(s, 't' + 256));
// }

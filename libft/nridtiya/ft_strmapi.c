/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:00:34 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 13:00:35 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// char func(unsigned int i, char c)
// {
// 	if (i % 2)
// 		return ('0' + i);
// 	else
// 		return (c);
// }
// int main()
// {
// 	char *test;
// 	char *str;

// 	test = "abcdefg";
// 	str = ft_strmapi(test, func);
// 	printf("%s", str);
// }
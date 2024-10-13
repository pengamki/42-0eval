/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:25:28 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/07 11:25:33 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static unsigned int	ft_sub_size(unsigned int start, size_t str_len, size_t len)
{
	unsigned int	sub_size;

	sub_size = 1;
	if (start < str_len)
	{
		if ((str_len - start) <= len)
			sub_size = str_len - start + 1;
		else
			sub_size = len + 1;
	}
	return (sub_size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	sub_size;
	unsigned int	i;

	i = 0;
	if (ft_strlen(s) < 0)
		return (NULL);
	sub_size = ft_sub_size(start, ft_strlen(s), len);
	sub = (char *)malloc(sub_size * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < sub_size - 1)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// #include <stdio.h>

// int	main()
// {
// 	char		*ptr;
// 	const char	*s =  "halo";

// 	ptr = ft_substr(s, 4294967295, 0);
// 	printf("%p -- %s", ptr, ptr);
// 	free(ptr);
// }
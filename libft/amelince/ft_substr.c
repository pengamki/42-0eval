/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:30:57 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 23:46:20 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (start > len_s || start < 0)
		len = 0;
	else if (len_s - start < len)
		len = len_s - start;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main(void)
// {
// 	char *str = "test42test";
// 	printf("%s\n", ft_substr(str, 4, 2));
// }

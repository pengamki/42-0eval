/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:55:20 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/13 15:28:54 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= strlen)
		len = 0;
	if ((strlen - start) < len)
		len = strlen - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (substr == NULL)
		return (NULL);
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

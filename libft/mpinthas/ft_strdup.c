/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:50:38 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/04 15:51:25 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	int		len;
	int		i;

	len = ft_strlen(s1);
	arr = (char *)malloc(len + 1);
	i = 0;
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		arr[i] = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

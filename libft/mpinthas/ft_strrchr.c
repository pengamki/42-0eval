/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:56:11 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/10 22:20:56 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int			len;

	len = 0;
	while (str[len])
		len++;
	if (search_str == '\0')
		return ((char *)&str[len]);
	while (len >= 0)
	{
		if (str[len] == (char)search_str)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

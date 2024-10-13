/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:08:32 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 15:43:33 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 < dstsize)
	{
		ft_memcpy(s, src, len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(s, src, dstsize - 1);
		s[dstsize - 1] = '\0';
	}
	return (len);
}

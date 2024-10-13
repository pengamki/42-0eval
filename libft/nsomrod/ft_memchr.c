/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:06:12 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 12:54:29 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	unsigned char	tc;
	size_t			i;

	ts = (unsigned char *) s;
	tc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ts[i] == tc)
			return ((void *) &ts[i]);
		i++;
	}
	return (NULL);
}

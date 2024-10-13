/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:33:22 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/13 10:17:03 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strr;
	unsigned char	cc;

	strr = (unsigned char *)str;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (strr[i] == cc)
		{
			return ((char *)(strr + i));
		}
		i++;
	}
	return (0);
}

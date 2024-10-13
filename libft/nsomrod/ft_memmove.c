/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:07:03 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:15:02 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s, const void *src, size_t n)
{
	unsigned char		*temp_s;
	const unsigned char	*temp_src;

	if (s == src)
		return (s);
	if (!s && !src)
		return (s);
	temp_s = (unsigned char *) s;
	temp_src = (unsigned char *) src;
	if (temp_s < temp_src)
	{
		ft_memcpy(s, src, n);
	}
	else
	{
		while (n-- > 0)
			temp_s[n] = temp_src[n];
	}
	return (s);
}

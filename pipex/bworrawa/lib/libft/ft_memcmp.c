/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:27:41 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/28 09:25:42 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			ctr;

	if (n == 0)
		return (0);
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	ctr = 0;
	while (ctr < n)
	{
		if ((unsigned char) cs1[ctr] != (unsigned char)cs2[ctr])
			return ((unsigned char)cs1[ctr] - (unsigned char)cs2[ctr]);
		ctr++;
	}
	return (0);
}

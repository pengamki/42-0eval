/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:06:45 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/28 17:54:39 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s, const void *d, size_t n)
{
	unsigned char	*temp_s;
	unsigned char	*temp_d;

	if (s == NULL || d == NULL)
		return (s);
	temp_s = (unsigned char *) s;
	temp_d = (unsigned char *) d;
	while (n > 0)
	{
		*(temp_s++) = *(temp_d++);
		n--;
	}
	return (s);
}

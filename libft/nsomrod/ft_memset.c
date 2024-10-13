/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:07:36 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:41:40 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int d, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (n-- > 0)
		*(temp++) = (unsigned char) d;
	return (s);
}

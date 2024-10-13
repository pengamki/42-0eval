/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:04:12 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 15:52:59 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	s;

	s = (size_t)(n * size);
	if ((long) n == 0 || (long) size == 0)
		s = 1;
	else if ((long) n < 0 || (long) size < 0)
		return (NULL);
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:27:13 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/27 09:27:01 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;
	unsigned char	seek;

	cur = (unsigned char *)s;
	seek = (unsigned char )c;
	while (n-- > 0)
	{
		if (*cur == seek)
			return (cur);
		cur++;
	}
	return (NULL);
}

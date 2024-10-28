/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:31:05 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/28 09:21:16 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	req;

	req = (size_t)(nmemb * size);
	if ((long) nmemb == 0 || (long) size == 0)
		req = 1;
	else if ((long) nmemb < 0 || (long) size < 0)
		return (NULL);
	ptr = malloc(req);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, req);
	return (ptr);
}

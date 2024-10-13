/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:48:18 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 18:48:23 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	long	buff;

	if (((int)nmemb < 0 && size != 0) \
	|| ((int)size < 0 && nmemb != 0))
		return (NULL);
	buff = nmemb * size;
	ptr = malloc(buff);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, buff);
	return (ptr);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *test;

// 	test = ft_calloc(-1, 0);
// 	// test = calloc(-1, 0);
// 	printf("--- %p\n", test);
// 	free(test);
// }

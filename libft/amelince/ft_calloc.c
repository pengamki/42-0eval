/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:21:30 by amelince          #+#    #+#             */
/*   Updated: 2024/09/21 11:24:30 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb <= 0 || size <= 0)
	{
		nmemb = 1;
		size = 1;
	}
	if ((nmemb * size) / nmemb != size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

// int main(void)
// {
// 	char *p;

// 	p = ft_calloc(6, sizeof(char));
// 	for (int i = 0; i < 100; i++)
// 		printf("%d ", p[i]);
// }

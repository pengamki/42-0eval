/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:06:45 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 17:06:48 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr) = 0;
		tmp_ptr++;
		n--;
	}
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
	// unsigned char test[4] = "abcd";
	// unsigned char ft_test[4] = "abcd";
	// bzero(test, 2);
	// ft_bzero(ft_test, 2);
	// printf("%s\n", test + 2);
	// printf("%s\n", ft_test + 2);

	// char *test = NULL;
	// char *ft_test=  NULL;
	// bzero(test, 2);
	// ft_bzero(ft_test, 2);
	// printf("%s\n", test + 2);
	// printf("%s\n", ft_test + 2);
// }
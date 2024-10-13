/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:06:09 by amelince          #+#    #+#             */
/*   Updated: 2024/09/11 18:27:37 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char c = '7';
// 	if (ft_isdigit(c))
// 		printf("%c is a digit :)\n", c);
// 	else
// 		printf("%c is not a digit :(\n", c);
// }

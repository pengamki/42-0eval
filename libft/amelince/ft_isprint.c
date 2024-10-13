/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:03:39 by amelince          #+#    #+#             */
/*   Updated: 2024/09/07 23:35:40 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int c = 20;
// 	if (ft_isprint(c))
// 		printf("%d is printable\n", c);
// 	else
// 		printf("%d is not printable\n", c);
// }

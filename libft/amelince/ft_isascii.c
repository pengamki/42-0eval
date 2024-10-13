/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:42:30 by amelince          #+#    #+#             */
/*   Updated: 2024/09/11 18:27:29 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char c = 'A';
// 	if (ft_isascii(c))
// 		printf("%c is an ascii value :)\n", c);
// 	else
// 		printf("%c is not an ascii value :(\n", c);
// }

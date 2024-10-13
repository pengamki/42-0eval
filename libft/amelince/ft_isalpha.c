/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:04:27 by amelince          #+#    #+#             */
/*   Updated: 2024/09/11 18:27:20 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	c = 'A';
// 	if (ft_isalpha(c))
// 		printf("%c is in the alphabet :)\n", c);
// 	else
// 		printf("%c is not in the alphabet :(\n", c);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:22:31 by amelince          #+#    #+#             */
/*   Updated: 2024/09/07 23:35:14 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char c = '.';
// 	if (ft_isalnum(c))
// 		printf("%c is a alphanumeric :)\n", c);
// 	else
// 		printf("%c is not a alphanumeric :(\n", c);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:32:42 by nridtiya          #+#    #+#             */
/*   Updated: 2024/08/31 15:16:55 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",ft_isalnum('6'));
// 	printf("%d\n",ft_isalnum('-'));
// }

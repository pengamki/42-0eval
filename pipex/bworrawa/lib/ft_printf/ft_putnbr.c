/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:43:46 by bworrawa          #+#    #+#             */
/*   Updated: 2024/09/02 15:56:30 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	len;

	len = 0;
	if (num <= -2147483648)
		return (ft_putstr("-2147483648"));
	if (num < 0)
	{
		len += write(1, "-", 1);
		num *= -1;
	}
	if (num < 10)
		return (len + ft_putchar(num + '0'));
	len += ft_putnbr(num / 10);
	len += ft_putnbr(num % 10);
	return (len);
}

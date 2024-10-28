/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:50:08 by bworrawa          #+#    #+#             */
/*   Updated: 2024/09/02 15:53:25 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long unsigned int num, char *base)
{
	long long unsigned int	base_len;
	int						len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (num < 0)
	{
		len += write(1, "-", 1);
		num *= -1;
	}
	base_len = ft_strlen(base);
	if (num < base_len)
		return (write(1, &base[num], 1));
	len += ft_putnbr_base(num / base_len, base);
	len += ft_putnbr_base(num % base_len, base);
	return (len);
}

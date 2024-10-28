/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:51:10 by bworrawa          #+#    #+#             */
/*   Updated: 2024/09/02 15:59:51 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long int	n;
	int						len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	n = (unsigned long long int)ptr;
	len += ft_putstr("0x");
	if (n >= 16)
	{
		len += ft_putnbr_base((unsigned long long int)(n / 16), LC_HEX_CHR);
		len += ft_putnbr_base((unsigned long long int)(n % 16), LC_HEX_CHR);
	}
	else
		return (len + ft_putnbr_base(n % 16, LC_HEX_CHR));
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:51:02 by bworrawa          #+#    #+#             */
/*   Updated: 2024/09/05 09:12:46 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_format(char fmt, va_list ap)
{
	char	*str;

	if (fmt == 'c')
		return (ft_putchar((char) va_arg(ap, int)));
	if (fmt == 's')
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			return (ft_putstr("(null)"));
		else
			return (ft_putstr(str));
	}
	if (fmt == '%')
		return (ft_putchar('%'));
	if (fmt == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	if (fmt == 'd' || fmt == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (fmt == 'u')
		return (ft_putnbr_base(va_arg(ap, unsigned), DEC_CHR));
	if (fmt == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), CAP_HEX_CHR));
	if (fmt == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), LC_HEX_CHR));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	size_t	len;
	va_list	ap;

	va_start(ap, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
			len += write_format(*(++s), ap);
		else
			len += write(1, s, 1);
		s++;
	}
	va_end(ap);
	return (len);
}

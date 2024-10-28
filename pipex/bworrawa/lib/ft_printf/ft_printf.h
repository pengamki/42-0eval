/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:45:24 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/04 16:12:12 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# define CAP_HEX_CHR "0123456789ABCDEF"
# define LC_HEX_CHR "0123456789abcdef"
# define DEC_CHR "0123456789"

size_t	ft_strlen(const char *s);
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned long long int num, char *base);
int		ft_putnbr(int num);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);

#endif

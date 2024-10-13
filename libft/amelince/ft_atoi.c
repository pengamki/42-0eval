/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:30:57 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 11:22:13 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = 1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	if (sign)
		res = -res;
	return (res);
}

static int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

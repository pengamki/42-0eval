/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleeva <agaleeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:05:10 by agaleeva          #+#    #+#             */
/*   Updated: 2024/08/31 17:23:24 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;
	int	result;

	number = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (check_sign(*nptr))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	result = number * sign;
	return (result);
}

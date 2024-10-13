/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:10:24 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 17:36:37 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int c)
{
	int	count;
	int	n;

	count = 0;
	n = c;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count ++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;
	long	c;

	c = (long) n;
	len = count_len(c);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '0';
	if (n < 0)
	{
		c = -c;
		result[0] = '-';
	}
	i = len - 1;
	while (c != 0)
	{
		result[i--] = (c % 10) + 48;
		c = c / 10;
	}
	result[len] = '\0';
	return (result);
}

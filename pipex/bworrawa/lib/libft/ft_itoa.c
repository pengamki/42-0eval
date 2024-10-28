/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:43:04 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/28 15:40:47 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int num)
{
	int	size;

	size = 0;
	if (num < 0)
	{
		size ++;
		num *= -1;
	}
	while (num != 0)
	{
		size++;
		num = num / 10;
	}
	if (size <= 0)
		size = 1;
	return (size);
}

static char	*prepare_mem(int len )
{
	char	*ret;

	if (len <= 0)
		len = 1;
	ret = (char *)malloc(sizeof(char) * len);
	ret[0] = '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	long	len;
	long	num;
	char	*ret;
	int		ctr;

	num = (long )n;
	len = int_len(num);
	ret = prepare_mem(len + 1);
	if (!ret)
		return (NULL);
	if (num < 0)
	{
		ret[0] = '-';
		num *= -1;
	}
	ctr = len - 1;
	while (num != 0)
	{
		ret[ctr] = ((num % 10) + '0');
		num = num / 10;
		ctr--;
	}
	ret[len] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:57:27 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 21:48:48 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_i(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len_str;
	long	number;

	number = n;
	len_str = len_i(n);
	str = malloc((len_str + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		number *= -1;
		str[0] = '-';
	}
	str[len_str] = '\0';
	while (number)
	{
		str[--len_str] = number % 10 + '0';
		number /= 10;
	}
	return (str);
}

static int	len_i(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(714));
// }

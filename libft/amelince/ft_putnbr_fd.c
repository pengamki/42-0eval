/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:19:50 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 23:34:32 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[10];
	long	nbr;
	int		i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (nbr)
	{
		arr[i++] = (int)(nbr % 10) + '0';
		nbr /= 10;
	}
	while (--i >= 0)
	{
		write(fd, &arr[i], 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:36:22 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/01 16:36:28 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = (number * 10) - (*nptr - '0');
		nptr++;
	}
	return (-1 * number * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main()
// {
// 	const char *s =  "-1";
// 	printf("%d\n", atoi((void*)0));
// 	printf("%d\n", ft_atoi((void*)0));
// }
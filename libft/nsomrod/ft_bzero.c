/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:03:22 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 12:52:50 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *s, size_t n)
{
	char	*temp;

	temp = (char *) s;
	while (n > 0)
	{
		*(temp++) = 0;
		n--;
	}
}

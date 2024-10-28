/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:14:45 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/04 16:00:28 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	ctr;

	ctr = 0;
	while (*s != '\0')
	{
		s++;
		ctr++;
	}
	return (ctr);
}
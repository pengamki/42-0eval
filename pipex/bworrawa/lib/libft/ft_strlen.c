/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:14:45 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 13:48:30 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	ctr;

	if (s == NULL)
		return (0);
	ctr = 0;
	while (*s != '\0')
	{
		s++;
		ctr++;
	}
	return (ctr);
}

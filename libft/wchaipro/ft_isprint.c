/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchaipro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:38:28 by wchaipro          #+#    #+#             */
/*   Updated: 2024/09/10 11:38:29 by wchaipro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// same idea with isalpha
// 0x20 = 32
// 0x5f = 95
// c - 32 < 95
int	ft_isprint(int c)
{
	return ((unsigned)c - 0x20 < 0x5f);
}

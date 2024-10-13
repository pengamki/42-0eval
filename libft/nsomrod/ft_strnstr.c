/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:09:16 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:15:28 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t n)
{
	size_t	i;
	size_t	j;

	if (*f == 0)
		return ((char *) s);
	if (n == 0 || ft_strlen(f) > ft_strlen(s))
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		j = 0;
		while (s[i + j] == f[j] && s[i + j] && i + j < n)
		{
			j++;
		}
		if (f[j] == 0)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:13:11 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:15:48 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *s2)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!s2)
		return (ft_strdup(s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] && ft_strchr(s2, s1[start]))
		++start;
	while (s1[start] && ft_strchr(s2, s1[end]))
		--end;
	return (ft_substr(s1, start, ((end - start) + 1)));
}

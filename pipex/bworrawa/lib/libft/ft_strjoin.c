/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:39:47 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/27 15:53:05 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)ft_calloc(len, sizeof (char));
	len = 0;
	while (*s1)
		ret[len ++] = *(s1++);
	while (*s2)
		ret[len ++] = *(s2++);
	ret[len] = '\0';
	return (ret);
}

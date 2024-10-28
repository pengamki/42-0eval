/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:25:52 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/26 20:00:08 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		ch;

	i = ft_strlen(s);
	ch = (char) c;
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == ch)
		return ((char *) &s[i]);
	return (NULL);
}

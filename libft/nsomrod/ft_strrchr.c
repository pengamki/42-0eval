/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:09:26 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/28 17:57:53 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*ss;

	cc = (char) c;
	ss = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			ss = ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		ss = ((char *) &s[i]);
	return (ss);
}

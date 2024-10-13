/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:12:56 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 17:17:01 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ss;

	ss = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ss[i] = (*f)(i, s[i]);
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

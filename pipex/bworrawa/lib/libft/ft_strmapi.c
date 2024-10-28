/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:44:25 by bworrawa          #+#    #+#             */
/*   Updated: 2024/08/28 17:59:58 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*cur;
	char			*ret;

	cur = (char *) s;
	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len +1));
	if (!ret)
		return (NULL);
	i = 0;
	while (cur[i])
	{
		ret[i] = (*f)(i, cur[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:58:40 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/07 16:58:42 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*s_join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_join = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!s_join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s_join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s_join[s1_len + i] = s2[i];
		i++;
	}
	s_join[s1_len + i] = '\0';
	return (s_join);
}

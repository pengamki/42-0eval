/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:30:50 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/07 17:30:52 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_is_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s_trim;

	start = 0;
	end = (int)ft_strlen(s1) - 1;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (s1[end] && ft_is_in_set(s1[end], set) && end > 0)
		end--;
	if (end <= 0)
		s_trim = (char *)malloc((1) * sizeof(char));
	else
		s_trim = (char *)malloc((end - start + 2) * sizeof(char));
	if (!s_trim)
		return (NULL);
	i = 0;
	while (start + i <= end && end > 0)
	{
		s_trim[i] = s1[start + i];
		i++;
	}
	s_trim[i] = '\0';
	return (s_trim);
}
// #include <stdio.h>
// int	main()
// {
// 	char	*s_trim;
// 	s_trim = ft_strtrim("", "123");
// 	printf("%p", s_trim);
// 	free(s_trim);
// }
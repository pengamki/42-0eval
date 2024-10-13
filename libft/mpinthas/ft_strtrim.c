/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:38:54 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/10 18:49:22 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_trim_len(const char *s1, const char *set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	end--;
	while (end > start && ft_in_set(s1[end], set))
		end--;
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		trim_len;
	char	*trimmed_str;
	int		i;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	trim_len = ft_trim_len(s1, set);
	trimmed_str = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (!trimmed_str)
		return (NULL);
	while (i < trim_len)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}

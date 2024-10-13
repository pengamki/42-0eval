/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 02:04:03 by am                #+#    #+#             */
/*   Updated: 2024/09/12 17:12:01 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_matchset(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	start;
	int				end;
	size_t			len;

	i = 0;
	while (ft_matchset(s1[i], set))
		i++;
	start = i;
	i = ((int)ft_strlen(s1) - 1);
	while (ft_matchset(s1[i], set))
		i--;
	end = i;
	len = (end - start) + 1;
	return (ft_substr(s1, start, len));
}

static int	ft_matchset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// int main(void)
// {
// 	char *s = "abcaaaa";
// 	char *set = "ab";
// 	ft_strtrim(s, set);
// }

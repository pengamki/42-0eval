/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:44:13 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/07 18:44:15 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_substr_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_substr_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	split_idx;

	if (!s)
		return (NULL);
	str = malloc((ft_substr_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	split_idx = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[split_idx] = ft_substr(s, i, ft_substr_len(&s[i], c));
			split_idx++;
			i += ft_substr_len(&s[i], c);
		}
		else
			i++;
	}
	str[split_idx] = NULL;
	return (str);
}
// #include <stdio.h>
// int	main()
// {
// 	char *s = "ab cd";
// 	char c = ' ';
// 	char **split;

// 	split = ft_split(s, c);
// 	printf("--%s\n",split[0]);
// 	printf("--%s\n",split[1]);
// 	printf("--%s\n",split[2]);
// 	free(split[0]);
// 	free(split[1]);
// 	free(split[2]);
// 	free(split);
// }
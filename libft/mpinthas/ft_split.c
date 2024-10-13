/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinthas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:31:09 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/10 18:33:26 by mpinthas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	ft_word_len(char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*ft_strndup(char *s, int n)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	ft_free(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		word_count;
	int		word_len;

	i = 0;
	if (!s)
		return (NULL);
	word_count = ft_count_words((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word_len = ft_word_len((char *)s, c);
		result[i] = ft_strndup((char *)s, word_len);
		if (!result[i])
			return (ft_free(result, i), NULL);
		s += word_len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

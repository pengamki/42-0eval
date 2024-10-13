/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:56:59 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 03:24:03 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c);
static int	len_s(char const *s, char c);
static char	*sub_s(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;
	size_t	i;
	int		index;

	i = 0;
	index = 0;
	if (s == NULL)
		return (NULL);
	words = countwords(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[index] = sub_s(&s[i], c);
			i += ft_strlen(arr[index++]);
		}
	}
	arr[index] = (NULL);
	return (arr);
}

static int	countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static int	len_s(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*sub_s(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((len_s(s, c) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char const *s = "lets see if it works";
// 	char c = ' ';
// 	int i = 0;
// 	char **arr = ft_split(s, c);
// 	while (i < 5)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }

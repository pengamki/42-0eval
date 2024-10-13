/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: am <am@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:58:21 by am                #+#    #+#             */
/*   Updated: 2024/09/11 03:30:48 by am               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	new_s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (*s1)
		new_s[i++] = *s1++;
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = '\0';
	return (new_s);
}

// int main(void)
// {
// 	char *s1 = "It ";
// 	char *s2 = "works!";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }

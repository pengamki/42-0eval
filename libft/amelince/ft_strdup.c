/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: am <am@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:02:39 by amelince          #+#    #+#             */
/*   Updated: 2024/09/11 00:21:16 by am               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	i = 0;
	len = (ft_strlen(s) + 1);
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main(void)
// {
// 	char *str = "duplicate";
// 	char *p;
// 	p = ft_strdup(str);
// 	printf("%s\n", p);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:58:15 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 22:12:23 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// static char capitalize(unsigned int index, char c)
// {
// 	return (c - 32);
// }

// int main(void)
// {
// 	char *s = "this is uppercase";
// 	char *new_s = ft_strmapi(s, &capitalize);
// 	printf("%s", new_s);
// }

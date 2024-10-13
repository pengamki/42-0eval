/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:15:38 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 23:56:53 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		ptr = (char *)&s[i];
	return (ptr);
}

// int main(void)
// {
// 	const char str[] = "c where is the last c?";
// 	int c = 'c';
// 	printf("%s\n", ft_strrchr(str, c));
// }

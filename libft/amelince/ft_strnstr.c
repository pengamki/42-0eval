/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:05:44 by am                #+#    #+#             */
/*   Updated: 2024/09/12 17:10:30 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		index;
	char	*p;

	i = 0;
	index = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		p = (char *)&big[i];
		if (big[i] == little[index])
		{
			while (big[i + index] == little[index] && i + index < len
				&& big[i + index] && little[index])
				index++;
			if (little[index] == '\0')
				return (p);
		}
		i++;
		index = 0;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *big = "lets see if we can find the little thing";
// 	const char *little = "little";
// 	printf("%s\n", ft_strnstr(big, little, 9));
// }

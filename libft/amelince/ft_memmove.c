/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelince <amelince@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:18:18 by amelince          #+#    #+#             */
/*   Updated: 2024/09/12 23:45:07 by amelince         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	int					i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest_ptr = dest;
	src_ptr = src;
	if (dest > src)
	{
		while (n--)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		while (n)
		{
			dest_ptr[i] = src_ptr[i];
			n--;
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char d[] = "Does it work?";
// //	char s[] = "It works!";

// 	ft_memmove(d + 2, d, 9);
// 	printf("%s\n", d);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:39:03 by mpinthas          #+#    #+#             */
/*   Updated: 2024/09/13 20:07:02 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;
	size_t	j;

	dest = (char *)dest_str;
	src = (char *)src_str;
	i = 0;
	j = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

int main(void)
{
    char src1[10] = "123456";
    char *og = memcpy(src1 + 2, src1, 4);
    printf("og: %s\n", og - 2);

    char src2[10] = "123456789";
    char *ft = ft_memmove(src2 + 2, src2, 6);
    printf("ft: %s\n", ft);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:36:07 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 15:36:09 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd;
// 	fd = open("test.txt",O_WRONLY);
// 	printf("%d\n", fd);
// 	ft_putstr_fd("abc", fd);
// 	close(fd);
// }
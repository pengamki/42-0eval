/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:05:13 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 16:05:14 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd;
// 	fd = open("test.txt",O_WRONLY);
// 	printf("%d\n", fd);
// 	ft_putendl_fd("acb", fd);
// 	ft_putstr_fd("xyz", fd);
// 	close(fd);
// }
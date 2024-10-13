/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:41:58 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 14:42:07 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd;
// 	fd = open("test.txt",O_WRONLY);
// 	printf("%d\n", fd);
// 	ft_putchar_fd('b', fd);
// 	close(fd);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:09:54 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 16:09:56 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	free(s);
}
// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd;
// 	fd = open("test.txt",O_WRONLY);
// 	printf("%d\n", fd);
// 	ft_putnbr_fd(12378, fd);
// 	close(fd);
// }
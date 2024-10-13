/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:22:49 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 13:22:51 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	iter(unsigned int i, char * s) {
// 	*s += i;
// }
// #include <stdio.h>
// int main()
// {
// 		char s[] = "0000000000";
// 		ft_striteri(s, iter);
// 		printf("%s", s);
// }
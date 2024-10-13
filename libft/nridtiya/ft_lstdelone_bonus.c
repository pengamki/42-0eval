/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:37:44 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/10 22:37:46 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void	free_func(char *str)
// {
// 	free(str);
// }
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	char	*str;

// 	str = (char *)malloc(3 * sizeof(char));
// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = '\0';
// 	n1 = ft_lstnew(str);
// 	ft_lstdelone(n1, free_func);
// 	printf("%s---------------", str);
// }
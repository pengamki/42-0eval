/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:19:49 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/10 23:19:52 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (!(*lst))
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = next_node;
	}
}
// void	free_func(char *str)
// {
// 	free(str);
// }
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	char	*str1;
// 	char	*str2;

// 	str1 = (char *)malloc(3 * sizeof(char));
// 	str1[0] = 'a';
// 	str1[1] = 'b';
// 	str1[2] = '\0';
// 	n1 = ft_lstnew(str1);
// 	str2 = (char *)malloc(3 * sizeof(char));
// 	str2[0] = 'c';
// 	str2[1] = 'd';
// 	str2[2] = '\0';
// 	n2 = ft_lstnew(str2);
// 	n2->next = n1;
// 	ft_lstclear(&n2, free_func);
// }
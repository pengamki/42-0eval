/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:31:39 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/10 21:31:41 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*n3;
// 	t_list	*lst;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	n3 = ft_lstnew("popop");

// 	lst = n1;
// 	ft_lstadd_front(&lst, n2);
// 	printf("first node %s\n", (*lst)->content);
// 	ft_lstadd_back(&lst,n3);
// 	printf("last node %s\n", n1->next->content);
// 	free(n1);
// 	free(n2);
// 	free(n3);
// }
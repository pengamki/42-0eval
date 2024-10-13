/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:24:32 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/10 21:32:00 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (lst == NULL)
		return (0);
	current_node = lst;
	while ((*current_node).next)
	{
		current_node = (*current_node).next;
	}
	return (current_node);
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	n2->next = n1;

// 	printf("%s\n",n2->next->content);
// 	printf("%s\n",ft_lstlast(n2)->content);
// 	free(n1);
// 	free(n2);
// }

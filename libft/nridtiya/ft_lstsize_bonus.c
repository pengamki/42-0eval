/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:40:39 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 21:40:41 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current_node;

	size = 0;
	current_node = lst;
	while (current_node)
	{
		size++;
		current_node = (*current_node).next;
	}
	return (size);
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	**lst;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	lst = &n1;
// 	ft_lstadd_front(lst, n2);
// 	printf("%d", ft_lstsize(n2));
// }

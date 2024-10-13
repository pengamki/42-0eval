/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:48:34 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 19:48:36 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*lst;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	lst = n1;
// 	ft_lstadd_front(&lst, n2);
// 	while ((lst))
// 	{
// 		printf("%s\n", ((*lst).content));
// 		lst = lst->next;
// 	}
// 	free(n1);
// 	free(n2);
// }
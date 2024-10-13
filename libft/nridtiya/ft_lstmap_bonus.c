/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:21:00 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/21 02:29:49 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first_new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	first_new_list = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (!(new_list->next))
		{
			ft_lstclear(&first_new_list, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (first_new_list);
}
// void	freeList(t_list *head) 
// {if (head) freeList((t_list *)head->next); free(head);}
// void	* addOne(void * p) 
// {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}
// #include <stdio.h>
// int	main()
// {
// 	int tab[] = {0, 1, 2, 3};
// 	t_list * l =  ft_lstnew(tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * m = ft_lstmap(l, addOne, free);
// 	t_list * tmp = l;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d %d\n", *(int*)tmp->content, i);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	tmp = m;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d %d\n", *(int*)tmp->content, i + 1);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	freeList(l); ft_lstclear(&m, free);
// 	return (0);
// }

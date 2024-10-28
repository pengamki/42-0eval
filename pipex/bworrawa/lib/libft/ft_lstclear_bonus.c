/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:43:36 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/20 15:56:45 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*temp;

	if (lst && *lst)
	{
		cur = (t_list *)*lst;
		while (cur)
		{
			temp = cur->next;
			ft_lstdelone(cur, del);
			cur = temp;
		}
		*lst = NULL;
	}
}

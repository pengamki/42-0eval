/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:10:38 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:18:35 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*back;

	if (!list || !new)
		return ;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	back = ft_lstlast(*list);
	back->next = new;
}

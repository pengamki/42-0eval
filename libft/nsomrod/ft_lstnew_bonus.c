/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomrod <nsomrod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:10:38 by nsomrod           #+#    #+#             */
/*   Updated: 2024/08/31 18:17:48 by nsomrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*test;

	test = (t_list *)malloc(sizeof(t_list));
	if (!test)
		return (NULL);
	test->content = content;
	test->next = NULL;
	return (test);
}

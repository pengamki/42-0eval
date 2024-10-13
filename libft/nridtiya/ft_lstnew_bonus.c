/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nridtiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:05:41 by nridtiya          #+#    #+#             */
/*   Updated: 2024/09/08 19:05:44 by nridtiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	(*node).content = content;
	(*node).next = NULL;
	return (node);
}
// #include <stdio.h>
// int	main()
// {
// 	t_list *n1;

// 	n1 = ft_lstnew("abcd");
// 	printf("%s \n", n1->content);
// 	free(n1);
// }
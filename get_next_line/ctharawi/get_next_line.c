/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:34:04 by pengamki          #+#    #+#             */
/*   Updated: 2024/11/09 23:43:49 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	ft_gettail(t_list **lst)
{
	t_list	*node;
	t_list	*tmp;
	char	*str;
	int		i;
	int		j;

	tmp = ft_lstlast(*lst);
	if (!tmp)
		return ;
	str = tmp->content;
	j = tmp->len;
	tmp->content = NULL;
	ft_lstclear_content(lst);
	i = 0;
	if (str[j] != '\0')
	{
		while (str[j] != '\0')
			str[i++] = str[j++];
		str[i] = '\0';
		node = ft_lstnew(str);
		ft_lstadd_back(lst, node);
	}
	else
		free(str);
}

void	ft_lst_strcat(t_list *lst, char **str)
{
	t_list	*node_ptr;
	int		bsize;
	int		i;

	node_ptr = lst;
	bsize = 0;
	while (node_ptr)
	{
		bsize += node_ptr->len;
		node_ptr = node_ptr->next;
	}
	if (!bsize)
		return ;
	*str = (char *)malloc(sizeof(char) * (bsize + 1));
	if (!*str)
		return ;
	bsize = 0;
	while (lst && lst->content)
	{
		i = 0;
		while (i < lst->len)
			(*str)[bsize++] = lst->content[i++];
		lst = lst->next;
	}
	(*str)[bsize] = '\0';
}

int	ft_no_nextline_found(t_list *node)
{
	int	i;

	node = ft_lstlast(node);
	if (!node)
		return (1);
	i = 0;
	while (node->content[i])
	{
		if (node->content[i] == '\n')
		{
			node->len = i + 1;
			return (0);
		}
		i++;
	}
	node->len = i;
	return (1);
}

void	ft_buffer_linkedlist(t_list **lst, int fd)
{
	int			read_done;
	t_list		*node;

	read_done = 0;
	while (ft_no_nextline_found(*lst))
	{
		node = ft_lstnew(NULL);
		node->content = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
		read_done = read(fd, node->content, BUFFER_SIZE);
		if (read_done <= 0)
		{
			free(node->content);
			free(node);
			return ;
		}
		node->content[BUFFER_SIZE] = '\0';
		ft_lstadd_back(lst, node);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*lst = NULL;
	char			*str;

	str = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_buffer_linkedlist(&lst, fd);
	if (!lst)
		return (NULL);
	ft_lst_strcat(lst, &str);
	ft_gettail(&lst);
	return (str);
}

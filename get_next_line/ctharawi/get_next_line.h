/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:34:41 by pengamki          #+#    #+#             */
/*   Updated: 2024/11/09 23:21:09 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

typedef struct s_list
{
	char			*content;
	int				len;
	struct s_list	*next;
}					t_list;

// libft
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				*ft_calloc(size_t nmemb, size_t size);

void				ft_lstclear_content(t_list **lst);
char				*get_next_line(int fd);
void				ft_lst_strcat(t_list *lst, char **str);
void				ft_buffer_linkedlist(t_list **lst, int fd);

#endif

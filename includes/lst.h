/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 19:35:03 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/10/01 20:18:35 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

typedef struct s_list t_list;

struct		s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

t_list		*ft_lst(void *content, size_t content_size);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(void const *content, size_t content_size);
t_list		*ft_lstfind(t_list *begin_list, void *data, int (*cmp)());
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelnode(t_list **head,
							t_list *node, void (*del)(void*, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_printlst(t_list **head);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_safe.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 20:38:14 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:26:23 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTS_SAFE
# define FTS_SAFE

#include "lst.h"

int		fts_gnl(const int fd, char **line);
void	fts_lstdelnode(t_list **head, t_list *node, void (*del)(void*, size_t));
void	fts_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list	*fts_lstnew(void const *content, size_t content_size);
void	fts_strdel(char **as);
char	*fts_strdup(const char *s1);
char	*fts_strjoin(char const *s1, char const *s2);
char	*fts_strnew(size_t size);

#endif

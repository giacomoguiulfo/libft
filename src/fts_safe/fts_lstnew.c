/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 17:39:00 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:41:50 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


#include <stdio.h>

t_list	*fts_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	printf("here\n");
	if ((node = (t_list *)fts_malloc(sizeof(t_list))) == 0)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if ((node->content = fts_malloc(sizeof(content_size))) == 0)
		{
			fts_free(node);
			return (NULL);
		}
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	printf("end of function\n");
	return (node);
}

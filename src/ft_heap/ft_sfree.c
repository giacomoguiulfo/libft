/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 23:39:06 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 07:19:53 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

static void	mfree_node(t_memnode *memnode)
{
	t_heap_man *heap_man;

	heap_man = ft_get_heap();
	if (memnode->prev == NULL)
		heap_man->first = memnode->next;
	else
		memnode->prev->next = memnode->next;
	if (memnode->next == NULL)
		heap_man->last = memnode->prev;
	else
		memnode->next->prev = memnode->prev;
	free(memnode);
}

int			ft_sfree(void *ptr)
{
	t_memnode	*memnode;

	if (ptr == NULL)
		return (1);
	memnode = (t_memnode *)((char *)ptr - sizeof(t_memnode));
	mfree_node(memnode);
	return (0);
}

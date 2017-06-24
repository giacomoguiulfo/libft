/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:38:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 07:20:06 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

static void	*srealloc_node(t_memnode *start, size_t src_size, size_t new_size)
{
	t_heap_man	*heap_man;
	t_memnode	*new_ptr;

	new_ptr = malloc(new_size);
	ft_memcpy(new_ptr, start, src_size);
	free(start);
	heap_man = ft_get_heap();
	if (new_ptr->prev == NULL)
		heap_man->first = new_ptr;
	else
		new_ptr->prev->next = new_ptr;
	if (new_ptr->next == NULL)
		heap_man->last = new_ptr;
	else
		new_ptr->next->prev = new_ptr;
	new_ptr->ptr = (char *)new_ptr + sizeof(t_memnode);
	return (new_ptr->ptr);
}

void		*ft_srealloc(void *ptr, size_t src_size, size_t new_size)
{
	t_memnode	*start;

	if (!new_size)
	{
		if (ptr)
			ft_sfree(ptr);
		return (ptr);
	}
	if (ptr == NULL)
		return (ft_smalloc(sizeof(new_size)));
	if (new_size <= src_size)
		return (ptr);
	start = (t_memnode *)((char *)ptr - sizeof(t_memnode));
	ptr = srealloc_node(start, src_size, new_size);
	return (ptr);
}

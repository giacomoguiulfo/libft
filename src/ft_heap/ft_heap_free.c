/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:04:59 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/23 06:45:23 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

int		ft_heap_free(void)
{
	t_heap_man	*heap_man;
	t_memnode	*memnode;
	t_memnode	*next;

	heap_man = ft_get_heap();
	if (heap_man == NULL)
		return (1);
	memnode = heap_man->first;
	while (memnode != NULL)
	{
		next = memnode->next;
		free(memnode);
		memnode = next;
	}
	free(heap_man);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_heap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:10:18 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/23 07:00:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

t_heap_man	*ft_get_heap(void)
{
	static t_heap_man	*heap_man;

	if (heap_man == NULL)
		heap_man = ft_memalloc(sizeof(t_heap_man));
	return (heap_man);
}

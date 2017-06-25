/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_memalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 08:21:08 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:06:49 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

void	*fts_memalloc(size_t size)
{
	void	*ptr;

	ptr = fts_malloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}

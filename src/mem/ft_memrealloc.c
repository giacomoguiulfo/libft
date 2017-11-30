/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:36:26 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/30 08:03:17 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

// void	*ft_memrealloc(void *ptr, size_t src_size, size_t new_size)
// {
// 	void *new_ptr;
//
// 	if (!new_size)
// 	{
// 		if (ptr)
// 			free(ptr);
// 		return (ptr);
// 	}
// 	if (!ptr)
// 		return (ft_memalloc(new_size));
// 	if (new_size <= src_size)
// 		return (ptr);
// 	new_ptr = ft_memalloc(new_size);
// 	if (new_ptr)
// 	{
// 		ft_memcpy(new_ptr, ptr, src_size);
// 		free(ptr);
// 	}
// 	return (new_ptr);
// }


void	*ft_memrealloc(void *ptr, size_t old_s, size_t new_s)
{
	void	*n_ptr;

	if (!ptr)
		return (ft_memalloc(new_s));
	if (!old_s)
	{
		ft_memdel(&ptr);
		return (ft_memalloc(new_s));
	}
	n_ptr = ft_memalloc(new_s);
	ft_memcpy(n_ptr, ptr, old_s);
	ft_memdel(&ptr);
	return (n_ptr);
}

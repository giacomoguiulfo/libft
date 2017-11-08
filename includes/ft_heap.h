/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:06:10 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:07:20 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAP_H
# define FT_HEAP_H

# include "libft.h"

typedef struct s_memnode	t_memnode;
typedef struct s_heap_man	t_heap_man;

struct			s_memnode
{
	void		*ptr;
	t_memnode	*prev;
	t_memnode	*next;
};

struct			s_heap_man
{
	t_memnode	*first;
	t_memnode	*last;
};

/*
** Memory allocation
*/

void			*fts_malloc(size_t size);
void			*fts_memalloc(size_t size);
void			*fts_realloc(void *ptr, size_t src_size, size_t new_size);

/*
** Memory deallocation
*/

int				fts_free(void *ptr);
int				fts_heap_free(void);

/*
** Heap manager
*/

t_heap_man		*fts_get_heap(void);

#endif

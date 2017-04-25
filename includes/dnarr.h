/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dnarr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 01:30:18 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/25 03:19:17 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DNARR_H
# define DNARR_H

# include "libft.h"
# define DEFAULT_EXPAND_RATE 300

typedef	struct	s_dnarr
{
	int			end;
	int			max;
	size_t		element_size;
	size_t		expand_rate;
	void		**contents;
}				t_dnarr;

#define dnarr_last(a) ((a)->contents[(a)->end - 1])
#define dnarr_first(a) ((a)->contents[0])
#define dnarr_end(a) ((a)->end)
#define dnarr_count(a) dnarr_end(a)
#define dnarr_max(a) ((a)->max)

void	*ft_memalloc(size_t size);

t_dnarr	*dnarr_create(size_t element_size, size_t initial_max);
void	dnarr_clr(t_dnarr *array);
static inline int dnarr_resize(t_dnarr *array, size_t newsize);
int		dnarr_expand(t_dnarr *array);
int dnarr_contract(t_dnarr *array);
void	dnarr_destroy(t_dnarr *array);
void	dnarr_clrdestroy(t_dnarr *array);
int		dnarr_push(t_dnarr *array, void *el);
void	*dnarr_pop(t_dnarr *array);

static inline void dnarr_set(t_dnarr * array, int i, void *el)
{
	if (!(i < array->max))
		return ;
	if (i > array->end)
		array->end = i;
	array->contents[i] = el;
}

static inline void *dnarr_get(t_dnarr * array, int i)
{
	if (!(i < array->max))
		return (NULL);
	return (array->contents[i]);
}

static inline void *dnarr_remove(t_dnarr * array, int i)
{
	void *el;

	el = array->contents[i];
	array->contents[i] = NULL;
	return (el);
}

static inline void *dnarr_new(t_dnarr * array)
{
	if (!(array->element_size > 0))
		return (NULL);
	return (ft_memalloc(array->element_size));
}

#endif

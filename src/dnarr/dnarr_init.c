/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dnarr_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 01:33:21 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/25 05:37:09 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dnarr.h>

t_dnarr	*dnarr_create(size_t element_size, size_t initial_max)
{
	t_dnarr *array;

	if ((array = (t_dnarr *)malloc(sizeof(t_dnarr))) == NULL)
		return (NULL);
	if ((array->max = initial_max) == 0)
		return (NULL);
	array->contents = ft_memalloc(sizeof(void *) * initial_max);
	if (array->contents == NULL)
		return (NULL);
	array->end = 0;
	array->element_size = element_size;
	array->expand_rate = DEFAULT_EXPAND_RATE;
	return (array);
}

void	dnarr_clr(t_dnarr *array)
{
	size_t i;

	i = 0;
	if (array->element_size > 0)
	{
		while (i < (size_t)array->max)
		{
			if (array->contents[i] != NULL)
				free(array->contents[i]);
			++i;
		}
	}
}

static inline int dnarr_resize(t_dnarr *array, size_t newsize)
{
	void *contents;

	if (newsize <= 0)
		return (-1);
	contents = ft_realloc(array->contents, array->max * sizeof(void *),
							newsize * sizeof(void *));
	array->max = newsize;
	array->contents = contents;
	return (0);
}

int	dnarr_expand(t_dnarr *array)
{
	size_t old_max;

	old_max = array->max;
	if (dnarr_resize(array, array->max + array->expand_rate) != 0)
		return (-1);
	ft_bzero(array->contents + old_max, array->expand_rate + 1);
	return (0);
}

int dnarr_contract(t_dnarr *array)
{
	int new_size;

	new_size = (array->end < (int)array->expand_rate) ?
				(int)array->expand_rate : array->end;
	return (dnarr_resize(array, new_size + 1));
}

void	dnarr_destroy(t_dnarr *array)
{
	if (array)
	{
		if (array->contents)
			free(array->contents);
		free(array);
	}
}

void	dnarr_clrdestroy(t_dnarr *array)
{
	dnarr_clr(array);
	dnarr_destroy(array);
}

int		dnarr_push(t_dnarr *array, void *el)
{
	array->contents[array->end] = el;
	array->end++;

	if (dnarr_end(array) >= dnarr_max(array))
		return (dnarr_expand(array));
	else
		return (0);
}

void	*dnarr_pop(t_dnarr *array)
{
	void	*el;

	if (array->end - 1 >= 0)
		return (NULL);
	el = dnarr_remove(array, array->end - 1);
	array->end--;
	if (dnarr_end(array) > (int)array->expand_rate
		&& dnarr_end(array) % array->expand_rate)
		dnarr_contract(array);
	return (el);
}

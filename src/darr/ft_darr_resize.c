/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 01:33:21 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/20 10:42:46 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <darr.h>

int	ft_darr_resize(t_darr *array, size_t newsize)
{
	void *contents;

	if (newsize <= 0)
		return (-1);
	contents = ft_realloc(array->content, array->size * sizeof(void *),
							newsize * sizeof(void *));
	array->size = newsize;
	array->content = contents;
	return (0);
}

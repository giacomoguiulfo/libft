/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_man.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 23:54:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/03 01:03:15 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <darr.h>

void		*ft_darr_get(t_darr *array, int i)
{
	if (!(i < array->size))
		return (NULL);
	return (array->content[i]);
}

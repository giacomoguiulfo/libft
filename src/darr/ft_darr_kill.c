/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darr_kill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 23:51:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/03 23:29:07 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <darr.h>

void		ft_darr_kill(t_darr *array)
{
	ft_darr_clear(array);
	ft_darr_destroy(array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optmap_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 00:36:01 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/12/21 00:36:40 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opts.h"
#include <stddef.h>

t_opt	*ft_optmap_short(t_opt opt_map[], char c)
{
	int	i;

	i = 0;
	while (opt_map[i].c)
	{
		if (opt_map[i].c == c)
			return (&opt_map[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:09:18 by giacomo           #+#    #+#             */
/*   Updated: 2017/11/25 00:10:54 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftopts.h"
#include "ft_getopts.h"
#include "libft.h"

int ft_getopts(char **av, t_ftopts opts_map[], void *data)
{
    if (!av)
        return (1);
    av++;
    while (av && *av)
    {
        if (!ft_strcmp(*av, "-") || (!ft_strcmp(*av, "--") && av++))
            break ;
        if ((*av)[0] == '-' && (*av)[1] == '-')
        {
            if (ftopts_long(&av, opts_map, data))
                return (1);
        }
        else if ((*av)[0] == '-')
        {
            if (ftopts_short(&av, opts_map, data))
                return (1);
        }
        else
            break ;
    }
    ((t_ftopts_data *)data)->argv = av;
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:09:18 by giacomo           #+#    #+#             */
/*   Updated: 2017/12/21 01:13:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftopts.h"
#include "opts.h"
#include "libft.h"

static int validate_required(t_opts *opts, void *data)
{
	int i;

	if (!opts->required_opts)
		return (0);
	i = 0;
	while (opts->opt_map[i])
	{
		if (opts->opt_map[i].requried &&
		!(data->flags & opts->opt_map[i].flags_on))
			return ((usage) ? ft_opt_usage(opts, opts->opt_map[i]) : 1);
	}
	return (0);
}

int			ft_opts(char **av, t_opts *opts, void *data, bool parse)
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
			if (ft_opt_long(&av, opts->opt_map, data))
				return (1);
		}
		else if ((*av)[0] == '-')
		{
			if (ft_opt_short(&av, opts->opt_map, data))
				return (1);
		}
		else
			break ;
	}
	opts->argv = av;
	av = (parse) ? av : g_argv;
	((t_optparse *)data)->argv = av;
	return (validate_required(opts));
}

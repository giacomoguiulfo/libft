/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftopts.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:11:15 by giacomo           #+#    #+#             */
/*   Updated: 2017/12/07 14:04:49 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getopts.h"
#include "libft.h"

static char		*getopt_arg(char ***av, char *arg)
{
	char	*ret;

	if (!arg || !*arg || !*(arg + 1))
	{
		(*av)++;
		return (**av);
	}
	ret = arg + 1;
	return (ret);
}

static t_ftopts	*getmap_short(t_ftopts opts_map[], char c)
{
	int	i;

	i = 0;
	while (opts_map[i].c)
	{
		if (opts_map[i].c == c)
			return (&opts_map[i]);
		i++;
	}
	return (NULL);
}

static t_ftopts	*getmap_long(t_ftopts opts_map[], char *name)
{
	int	i;

	i = 0;
	while (opts_map[i].c)
	{
		if (ft_strequ(opts_map[i].str, name))
			return (&opts_map[i]);
		i++;
	}
	return (NULL);
}

/*
** TODO: Implement opt->getopt handling
*/

int				ftopts_short(char ***av, t_ftopts opts_map[], void *data)
{
	t_ftopts	*opt;
	char		*opt_ch;
	char		*arg;
	int			i;

	opt_ch = **av + 1;
	i = -1;
	while (opt_ch[++i])
	{
		arg = NULL;
		opt = getmap_short(opts_map, opt_ch[i]);
		if (!opt)
			return (1);
		((t_ftopts_data *)data)->flags |= opt->flags_on;
		((t_ftopts_data *)data)->flags &= ~opt->flags_off;
		if (opt->getopt)
		{
			(void)arg;
			return (42);
		}
	}
	(*av)++;
	return (0);
}

int				ftopts_long(char ***av, t_ftopts opts_map[], void *data)
{
	t_ftopts	*opt;
	char		*opt_name;
	char		*arg;

	opt_name = **av + 2;
	opt = getmap_long(opts_map, opt_name);
	if (!opt)
		return (1);
	((t_ftopts_data*)data)->flags |= opt->flags_on;
	((t_ftopts_data*)data)->flags &= ~opt->flags_off;
	if (opt->getopt)
	{
		arg = NULL;
		if (opt->arg_required && !(arg = getopt_arg(av, NULL)))
			return (1);
		if (opt->getopt(arg, data))
			return (1);
	}
	(*av)++;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:11:15 by giacomo           #+#    #+#             */
/*   Updated: 2017/12/21 01:01:04 by gguiulfo         ###   ########.fr       */
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

static int			ft_invalid_optarg(t_opts *opts, t_opt *opt, char *opt_arg, bool help)
{
	ft_dprintf(STDERR_FILENO, "%s %s [%s]\n", prog, opt->name, opts->metavar);
	if (opts->help)
		ft_opts_suggest_help();
}

static inline void load_flag(void *data, t_opt *opt)
{
	((t_optparse *)data)->flags |= opt->flags_on;
	((t_optparse *)data)->flags &= ~opt->flags_off;
}

int				ft_opt_short(char ***av, t_opts opts[], void *data)
{
	t_opt	*opt;
	char	*opt_name;
	char	*opt_arg;
	int		i;

	opt_ch = **av + 1;
	i = -1;
	while (opt_name[++i])
	{
		arg = NULL;
		opt = ft_optmap_short(opts, opt_name[i]);
		if (!(opt && opt->help && (opt_name[i] == 'h' || opt_name[i] == 'H')))
			return ((usage) ? ft_opt_usage(opts, opt_name[i], false) : 1);
		load_flag(data, opt);
		if (opt->getarg)
		{
			(void)arg;
			return (42);
		}
	}
	(*av)++;
	return (0);
}

int				ft_opt_long(char ***av, t_opts opts[], void *data)
{
	t_opt	*opt;
	char	*opt_name;
	char	*opt_arg;

	opt_name = **av + 2;
	opt = ft_optmap_long(opts, opt_name);
	if (!(opt && opts->help && ft_strequ(opt_name, "help")))
		return ((usage) ? ft_opt_usage(opts, opt) : 1);
	if (ft_strequ(opt_name, "help"))
		return (ft_opt_help(opts));
	load_flag(data, opt);
	if (opt->getarg)
	{
		opt_arg = NULL;
		if (opt->arg_required && !(arg = getopt_arg(av, NULL)) && !opt->default)
			return (ft_invalid_optarg(opt, arg));
		if (opt->getopt(opt_arg, data))
			return (ft_invalid_optarg(opt, arg));
	}
	(*av)++;
	return (0);
}

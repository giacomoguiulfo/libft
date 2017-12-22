/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opts.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:14:17 by giacomo           #+#    #+#             */
/*   Updated: 2017/12/21 01:08:11 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETOPTS_H
# define FT_GETOPTS_H

typedef long long	t_flag;

typedef struct	s_opts
{
	char		*prog;
	char		*description;
	char		*epilog;
	char		**argv;
	int			help:1;
	int			usage:1;
	int			required_opts:1;
	t_opt		opt_map[];
}				t_opts;

typedef struct	s_opt
{
	char		c;
	char		*name;
	char		*help;
	char		*default;
	char		*metavar;
	t_flag		flags_on;
	t_flag		flags_off;
	int			(*getarg)();
	int			arg_required:1;
	int			requried:1;
}				t_opt;

typedef struct	s_optparse
{
	t_flag		flags;
	char		**argv;
}				t_optparse;

int				ft_getopts(char **av, t_ftopts opts_map[], void *data);

#endif

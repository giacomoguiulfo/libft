/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opts_usage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:30:42 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/12/21 00:57:45 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opts.h"
#include <unistd.h>

int ft_opts_usage(t_opts *opts, t_opt *opt, bool name)
{
	if (!opt)
	{
		if (name)
			ft_dprintf(STDERR_FILENO, "%s: unrecognized option '--%s'\n",
			prog, opt->name);
		else
			ft_dprintf(STDERR_FILENO, "%s: invalid option -- '%c'\n",
			prog, opt->c);
		if (opts->help)
			ft_opts_suggest_help();
	}
	else if (opt->requried)
	{
		if (name)
			ft_dprintf(STDERR_FILENO, "%s: requried option '--%s'\n",
			prog, opt->name);
		else
			ft_dprintf(STDERR_FILENO, "%s: requried option -- '%c'\n",
			prog, opt->c);
		if (opts->help)
			ft_opts_suggest_help();
	}
	return (1);
}

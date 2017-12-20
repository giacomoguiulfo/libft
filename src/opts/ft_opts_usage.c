/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opts_usage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:30:42 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/12/19 21:35:45 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_opts_usage(t_opts *opts, t_opt *opt, bool str)
{
	if (!opt)
	{
		ft_dprintf(STDERR_FILENO, "invalid option");
		if (str)
			ft_putstr(opt->name);
		else
			ft_putchar(opt->c);
		ft_putchar('\n');
	}
	else
	{
		ft_dprintf(STDERR_FILENO, "option is required")
		...
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:14:17 by giacomo           #+#    #+#             */
/*   Updated: 2017/11/25 00:22:16 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETOPTS_H
# define FT_GETOPTS_H

typedef long long t_flag;

typedef struct  s_ftopts
{
    char        c;
    char        *str;
    t_flag      flags_on;
    t_flag      flags_off;
    int         (*getopt)();
    int         arg_required:1;
}               t_ftopts;

typedef struct  s_ftopts_data
{
    t_flag      flags;
    char        **argv;
}               t_ftopts_data;

int ft_getopts(char **av, t_ftopts opts_map[], void *data);

#endif

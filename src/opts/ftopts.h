/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftopts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:17:11 by giacomo           #+#    #+#             */
/*   Updated: 2017/11/25 00:22:49 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTOPTS_H
# define FTOPTS_H

# include "ft_getopts.h"

int ftopts_short(char ***av, t_ftopts opts_map[], void *data);
int ftopts_long(char ***av, t_ftopts opts_map[], void *data);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:04:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/22 13:59:02 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "arr.h"
# include "chr.h"
# include "darr.h"
# include "dstr.h"
# include "err.h"
# include "gnl.h"
# include "heap.h"
# include "lst.h"
# include "mem.h"
# include "nbr.h"
# include "printf.h"
# include "sort.h"
# include "str.h"
# include "term.h"

# ifndef DEBUG
#  define DG_1			"%{bblue}%s, %{bcyan}%s, %{bgreen}%4d - %{bred}"
#  define DG_2		__FILE__, __func__, __LINE__
#  define DEBUG(f, ...)	ft_dprintf(2, DG_1 f "%{eoc}\n", DG_2, ##__VA_ARGS__)
# endif

# define ABS(a) ((a) * (((a) > 0) * 2 - 1))
# define ARRLEN(a) (sizeof(a)/sizeof(a[0]))
# define EVEN(n) (n % 2 == 0)
# define ODD(n) (n % 2 == 1)
# define MAX(a, b) (((a) > (b)) ? (a) : (b))
# define MIN(a, b) (((a) < (b)) ? (a) : (b))
# define DIFF(a, b) ((a) < (b) ? -1 : (a) > (b))
# define FAILED (-1)
# define SUCCESS (0)
# define SQUARE(a) ((a) * (a))

# define ASC_BRED	"\033[31;1m"
# define ASC_EOC	"\033[0m"

#endif

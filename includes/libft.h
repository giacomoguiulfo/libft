/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:04:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/22 06:04:07 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

# include "arr.h"
# include "chr.h"
# include "darr.h"
# include "ft_ctype.h"
# include "ft_error.h"
# include "ft_heap.h"
# include "ft_math.h"
# include "ft_printf.h"
# include "ft_sort.h"
# include "ft_stdlib.h"
# include "ft_string.h"
# include "ft_term.h"
# include "ft_vector.h"
# include "get_next_line.h"
# include "lst.h"
# include "mem.h"
# include "nbr.h"
# include "str.h"

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
// # define RETURN(x) (1;return(x);) 

# define ASC_BRED	"\033[31;1m"
# define ASC_EOC	"\033[0m"

#endif

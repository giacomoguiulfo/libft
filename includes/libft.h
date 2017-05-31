/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:04:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:12:00 by gguiulfo         ###   ########.fr       */
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

# include "arr.h"
# include "chr.h"
# include "dnarr.h"
# include "ft_ctype.h"
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

# define ABS(a) ((a) * (((a) > 0) * 2 - 1))
# define ARRLEN(a) (sizeof(a)/sizeof(a[0]))
# define EVEN(n) (n % 2 == 0)
# define ODD(n) (n % 2 == 1)
# define MAX(a, b) (((a) > (b)) ? (a) : (b))
# define MIN(a, b) (((a) < (b)) ? (a) : (b))
# define DIFF(a, b) ((a) < (b) ? -1 : (a) > (b))
# define FAILED -1
# define SUCCESS 0

# define ASC_BRED	"\033[31;1m"
# define ASC_EOC	"\033[0m"

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:04:23 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/16 00:12:13 by gguiulfo         ###   ########.fr       */
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

# include "chr.h"
# include "ft_ctype.h"
# include "ft_math.h"
# include "ft_printf.h"
# include "ft_stdlib.h"
# include "ft_string.h"
# include "ft_vector.h"
# include "get_next_line.h"
# include "lst.h"
# include "mem.h"
# include "nbr.h"
# include "str.h"

# define ABS(a) (val * ((val > 0) * 2 - 1))
# define ARRLEN(a) (sizeof(a)/sizeof(a[0]))
# define EVEN(n) (n % 2 == 0)
# define ODD(n) (n % 2 == 1)
# define MAX(a, b) (((a) > (b)) ? (a) : (b))
# define MIN(a, b) (((a) < (b)) ? (a) : (b))
# define FAILED -1
# define SUCCESS 0

#endif

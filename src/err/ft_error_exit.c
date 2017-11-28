/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:56:24 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/28 04:02:17 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	**g_argv;

void	ft_error_exit(const char *str)
{
	ft_dprintf(STDERR_FILENO, "%{bred}Error: %s%{eoc}\n", str);
	exit(EXIT_FAILURE);
}

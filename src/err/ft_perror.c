/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 10:27:55 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/28 15:34:59 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

char	**g_argv = NULL;

int		ft_perror(char *name)
{
	name = name ? name : g_argv[0];
	return (0);
}
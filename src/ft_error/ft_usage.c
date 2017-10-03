/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 20:19:08 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/10/02 21:27:22 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_usage(char const *name, char const *str)
{
	ft_dprintf(STDERR_FILENO, "%{bred}usage: %s%s%{eoc}\n", name, str);
	exit(EXIT_FAILURE);
}

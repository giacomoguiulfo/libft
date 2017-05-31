/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highlight.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:43:39 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:10:35 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "ft_term_private.h"

void	ft_highlight(bool set)
{
	if (set == true)
		ft_termcmd("so");
	else if (set == false)
		ft_termcmd("se");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_underline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:44:11 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:07:48 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "ft_term_private.h"

void	ft_underline(bool set)
{
	if (set == true)
		ft_termcmd("us");
	else if (set == false)
		ft_termcmd("ue");
}

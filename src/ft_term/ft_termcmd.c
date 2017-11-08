/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_termcmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:19:34 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:16:02 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <term.h>

void	ft_termcmd(char *str)
{
	if (!str || !*str)
		return ;
	ft_putstr_fd(tgetstr(str, NULL), STDERR_FILENO);
}

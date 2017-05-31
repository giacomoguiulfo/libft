/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_win_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:30:06 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:15:29 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/ioctl.h>

void	ft_get_win_size(int *x, int *y)
{
	struct	winsize win;

	ioctl(STDIN_FILENO, TIOCGWINSZ, &win);
	*x = win.ws_col;
	*y = win.ws_row;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:08:04 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/29 18:20:09 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

void	ft_clrscreen(int rows);
void	ft_cursor_goto(int x, int y);
void	ft_get_win_size(int *x, int *y);
void	ft_highlight(bool set);
void	ft_termcmd(char *str);
void	ft_underline(bool set);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 21:45:24 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/23 05:57:26 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define GNL_BUFF_SIZE 1024

typedef struct	s_gnl
{
	int			fd;
	char		*file_content;
}				t_gnl;

int	get_next_line(const int fd, char **line);

#endif

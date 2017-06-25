/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_strnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 15:42:20 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 20:30:39 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*fts_strnew(size_t size)
{
	char *str;
	char *start;

	if ((str = (char *)fts_malloc(sizeof(char) * size + 1)) == 0)
		return (0);
	start = str;
	while (size--)
		*str++ = '\0';
	*str = '\0';
	return (start);
}

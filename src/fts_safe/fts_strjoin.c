/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 16:52:18 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 20:30:28 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*fts_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*start;

	if (!s1 || !s2 ||
		(str = fts_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)) == 0)
		return (NULL);
	start = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (start);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:11:12 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:08:27 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*fts_strdup(const char *s1)
{
	int		i;
	char	*dup;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dup = (char*)fts_malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		dup[i] = s1[i];
	dup[i] = '\0';
	return (dup);
}

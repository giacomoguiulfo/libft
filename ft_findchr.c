/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 22:01:36 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/12 20:29:02 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_findchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (i);
		i++;
	}
	if (s[i] == a)
		return (ft_strlen(s));
	return (0);
}

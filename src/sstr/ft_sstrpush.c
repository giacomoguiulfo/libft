/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:55:40 by giacomo           #+#    #+#             */
/*   Updated: 2017/12/07 13:52:09 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_sstrpush(char **sstr, char *str)
{
	char	**ret;
	int		size;

	if (!sstr)
		return (NULL);
	size = 0;
	while (sstr[size])
		size++;
	ret = (char **)ft_memalloc(sizeof(char *) * (size + 2));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, sstr, sizeof(char *) * size);
	ret[size] = ft_strdup(str);
	ret[size + 1] = NULL;
	free(sstr);
	return (ret);
}

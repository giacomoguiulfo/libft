/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 22:07:22 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/03/03 20:48:27 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*mem;
	unsigned char	*str;

	if (size == 0 || (mem = malloc(size)) == 0)
		return (0);
	str = (unsigned char *)mem;
	while (size--)
		*str++ = 0;
	return (mem);
}

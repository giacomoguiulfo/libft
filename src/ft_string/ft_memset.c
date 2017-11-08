/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:51:01 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/20 11:13:53 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Description:
** Equivalent to libc's memset() function, man memset(3).
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char chr;
	unsigned char *str;

	chr = c & 0xff;
	str = (unsigned char *)b;
	while (len--)
		*str++ = chr;
	return (b);
}

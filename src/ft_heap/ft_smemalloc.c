/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 08:21:08 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 08:24:36 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

void	*ft_smemalloc(size_t size)
{
	void	*ptr;

	ptr = ft_smalloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}

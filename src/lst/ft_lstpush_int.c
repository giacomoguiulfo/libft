/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 02:14:54 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/30 02:17:41 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstpush_int(t_list **stack, int elem)
{
	ft_lstadd(stack, ft_lstnew(&elem, sizeof(elem)));
	return (*stack);
}

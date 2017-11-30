/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 02:24:43 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/11/30 04:32:17 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstpop_int(t_list **stack)
{
	t_list	*top;
	int		elem;

	if (!(stack && *stack))
		return (0);
	top = *stack;
	elem = top ? *(int *)top->content : 0;
	*stack = (*stack)->next;
	ft_lstdelone(&top, ft_lstfree);
	return (elem);

}

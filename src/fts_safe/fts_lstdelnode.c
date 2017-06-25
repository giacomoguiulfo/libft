/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_lstdelnode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:15:38 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 21:25:58 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	fts_lstdelnode(t_list **head, t_list *node, void (*del)(void*, size_t))
{
	t_list *temp;

	if (!node)
		return ;
	if (*head == node)
		*head = (*head)->next;
	else
	{
		temp = *head;
		while (temp->next != 0 && temp->next != node)
			temp = temp->next;
		if (temp->next == 0)
			return ;
		temp->next = temp->next->next;
	}
	fts_lstdelone(&node, del);
}

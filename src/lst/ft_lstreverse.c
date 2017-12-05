/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 06:09:27 by giacomo           #+#    #+#             */
/*   Updated: 2017/11/22 06:18:42 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstreverse(t_list **head)
{
    t_list *current;
    t_list *prev;
    t_list *next;

    prev = NULL;
    if (head)
    {
        current = *head;
        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        *head = prev;
    }
    return (prev);
}

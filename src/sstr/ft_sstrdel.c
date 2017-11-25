/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giacomo <giacomo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 01:35:21 by giacomo           #+#    #+#             */
/*   Updated: 2017/11/25 01:42:37 by giacomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_sstrdel(char **sstr, int index)
{
    int i;

    ft_strdel(&sstr[index]);
    i = index;
    while (sstr[i] || i == index)
    {
        sstr[i] = sstr[i + 1];
        i++;
    }
}

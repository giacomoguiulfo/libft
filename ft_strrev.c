/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 18:04:45 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/03/12 18:23:56 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int start;
	int end;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		ft_swap(str + start, str + end, sizeof(char));
		start++;
		end--;
	}
	return (str);
}

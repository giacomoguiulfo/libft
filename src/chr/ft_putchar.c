/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:43:52 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/08/21 08:47:14 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Description:
** This function is equivalent to libc's putchar() function, man putchar(3).
*/

int	ft_putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

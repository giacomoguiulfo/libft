/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 17:01:39 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/20 10:44:53 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** Equivalent to libm's isnan() function, man isnan(3).
*/

int		ft_isnan(double num)
{
	return (num != num);
}

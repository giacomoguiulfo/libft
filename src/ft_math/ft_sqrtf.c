/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:51:59 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/20 10:48:43 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
** Equivalent of libm's sqrtf() function, man sqrtf(3).
*/

float	ft_sqrtf(float x)
{
	const float	n = 0.0001;
	float		ret;

	if (x <= 0)
		return (0);
	ret = 0;
	while (ret < x)
	{
		if ((ret * ret) > x)
		{
			ret -= n;
			break ;
		}
		ret += n;
	}
	return (ret);
}

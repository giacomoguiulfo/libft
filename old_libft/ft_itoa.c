/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:58:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/03/05 00:04:18 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_nblen(long long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			neg_f;
	long long	num;

	neg_f = (n >= 0) ? 0 : 1;
	num = n;
	num = (neg_f) ? -num : num;
	len = (neg_f) ? ft_nblen(num) + 1 : ft_nblen(num);
	if ((str = ft_strnew(len)) == 0)
		return (0);
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (neg_f)
		str[0] = '-';
	str[len] = '\0';
	while (len-- > neg_f)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

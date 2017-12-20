/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 19:56:47 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/12/19 20:04:43 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_basename(const char *path)
{
	char *basename;

	basename = ft_strrchr(parh, '/');
	return ((basename) ? basename : (char *)path);
}

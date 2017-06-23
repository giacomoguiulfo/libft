/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 21:44:34 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/23 05:58:18 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		gnl_free(void *content, size_t size)
{
	(void)size;
	ft_strdel(&((t_gnl *)content)->file_content);
	free(content);
}

static int		gnl_read(int fd, char **line, char *content)
{
	char	buf[GNL_BUFF_SIZE + 1];
	char	*tmp;
	char	*ptr;
	int		ret;

	content[0] = '\0';
	while ((ret = read(fd, buf, GNL_BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		if ((ptr = ft_strchr(buf, '\n')) != NULL)
		{
			ft_strcpy(content, ptr + 1);
			*ptr = '\0';
		}
		tmp = *line;
		if ((*line = ft_strjoin(*line, buf)) == NULL)
			return (-1);
		free(tmp);
		if (ptr)
			return (1);
	}
	return ((*line[0] != '\0') ? 1 : 0);
}

static t_list	*gnl_new_fd(t_list **begin_list, int fd)
{
	t_gnl	new;

	new.fd = fd;
	new.file_content = ft_strnew(GNL_BUFF_SIZE);
	ft_lstadd(begin_list, ft_lstnew(&new, sizeof(t_gnl)));
	return (*begin_list);
}

static int		gnl_cmp_fd(t_gnl *node, int *fd)
{
	return (node->fd - *fd);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*head;
	t_list			*tmp;
	char			*ptr;
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	if ((tmp = ft_lstfind(head, (void *)&fd, gnl_cmp_fd)) == NULL)
		tmp = gnl_new_fd(&head, fd);
	if ((*line = ft_strdup(((t_gnl*)tmp->content)->file_content)) == NULL)
		return (-1);
	if ((ptr = ft_strchr(*line, '\n')) != NULL)
	{
		ft_strcpy((((t_gnl *)tmp->content)->file_content), ptr + 1);
		*ptr = '\0';
		return (1);
	}
	if ((ret = gnl_read(fd, line, (((t_gnl*)tmp->content)->file_content))) == 0)
	{
		ft_lstdelnode(&head, tmp, gnl_free);
		*line = NULL;
	}
	return (ret);
}

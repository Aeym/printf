/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 20:54:49 by ealrick           #+#    #+#             */
/*   Updated: 2017/01/19 20:48:14 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static int			core_gnl(t_struct *s, char **line, int fd, int ret)
{
	while (!((s->tmp3 = ft_strchr(s->tmp, '\n'))))
	{
		if ((ret = read(fd, s->buff, BUFF_SIZE)) < 1)
		{
			if (ret < 0)
				return (-1);
			if (ret == 0)
			{
				if (ft_strlen(s->tmp))
				{
					*line = s->tmp;
					s->stock[fd] = NULL;
					return (1);
				}
				else
					return (0);
			}
		}
		s->buff[ret] = '\0';
		s->tmp2 = ft_strjoin(s->tmp, s->buff);
		free(s->tmp);
		s->tmp = s->tmp2;
	}
	return (2);
}

int					get_next_line(const int fd, char **line)
{
	static t_struct	s;
	int				ret;
	int				ret2;

	ret = 0;
	if (fd < 0 || fd > 5000 || !line)
		return (-1);
	if (!s.stock[fd])
		s.stock[fd] = ft_strnew(BUFF_SIZE);
	s.tmp = ft_strcpy(ft_memalloc(BUFF_SIZE), s.stock[fd]);
	if ((ret2 = core_gnl(&s, line, fd, ret)) != 2)
		return (ret2);
	*line = ft_strsub(s.tmp, 0, ft_strlen(s.tmp) - ft_strlen(s.tmp3));
	s.stock[fd] = ft_strncpy(s.stock[fd], s.tmp3 + 1, BUFF_SIZE);
	return (1);
}

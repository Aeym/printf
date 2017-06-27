/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 15:30:29 by ealrick           #+#    #+#             */
/*   Updated: 2017/01/26 16:24:40 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include <fcntl.h>
# include "libft.h"

typedef struct	s_struct
{
	char		*stock[5000];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	char		*tmp2;
	char		*tmp3;
}				t_struct;

int				get_next_line(const int fd, char **line);

#endif

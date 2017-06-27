#include <stdarg.h>
#include <stdio.h>
#include "libft/libft.h"

typedef struct 	s_dat
{
	char		*tmp;
	char		buff[4000];
	char		c;
	int			j;
	int			tot;

}				t_dat;

int				ft_printf(const char * restrict str, ...);
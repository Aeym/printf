#include "ft_printf.h"

int			ft_printf(const char * restrict str, ...)
{
	t_dat	d;
	int		i;
	va_list	ap;

	i = 0;
	ft_bzero(d.buff, 4000);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) == 'd')
		{
			 d.j = va_arg(ap, int);
			 ft_strcat(d.buff, ft_itoa(d.j));
			 str += 2;
			 i+= ft_strlen(ft_itoa(d.j));
			 // printf("test 1\n");
		}
		else if (*str == '%' && *(str + 1) == 's')
		{
			d.tmp = va_arg(ap, char *);
			ft_strcat(d.buff, d.tmp);
			str += 2;
			i+= ft_strlen(d.tmp);
			// printf("test 2 \n");
		}
		else if (*str == '%' && *(str + 1) == 'c')
		{
			d.c = va_arg(ap, int);
			d.buff[i] = (char)d.c;
			str += 2;
			i++;
			// printf("test 3\n");
		}
		else
		{
			d.buff[i] = *str;
			// printf("test4\n");
			str++;
			i++;
		}
	}
	ft_putstr(d.buff);
	return (ft_strlen(str));
}
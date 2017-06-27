#include "ft_printf.h"

int main()
{
	int i = 568832;
	char c = 'c';
	char str[] = " poilus kgjdshdsja.s fpv; ";
	ft_printf("ft_printf :%d%c\n %s\n%d\n %s\n\n %s\n", i, c, str, i, str, str);
	// printf("\n");
	printf("printf :%d%c\n %s\n%d\n %s\n\n %s\n", i, c, str, i, str, str);
	return (0);
}
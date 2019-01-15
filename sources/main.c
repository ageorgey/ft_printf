#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

/*void			f(char *str, ...)
{
	s_format	*sf;
	va_list		ap;

	sf = init_struct();
	sf->type = "f";
	va_start(ap, str);
	sf = convert_f(sf, ap);
	ft_putendl(sf->str);
	va_end(ap);
}*/


int				main(int ac, char **av)
{
	long long		nb;
	int		c;

	nb = 42000;
	c = 42000;
	//f("Bonjour", nb);
	printf("llX = %llX\nd = %X\n", nb, c);
	return (0);
}

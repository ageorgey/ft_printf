#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

void			f()
{
	s_format	*sf;
	//va_list		ap;

	sf = init_struct();
	//va_start(ap, str);
	sf = parse_format("%f", sf);
	ft_putendl(sf->precision);
	//va_end(ap);
}


int				main(int ac, char **av)
{
	int		nb;
	double		dbl;
	char		*str;

	str ="Adam le dév";
	nb = 9327;
	dbl = 42.;
	//f();
	//printf("'010'  : |%010i|\n", nb);
	//printf("' 10'  : |% 10i|\n", nb);
	//ft_putendl(ft_dbltoa(dbl, 6));
	ft_printf("string %% ", str);
	return (0);
}

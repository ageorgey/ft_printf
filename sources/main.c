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
	nb = 9;
	dbl = 42.;
	f();
	//printf("%#12.5lf\n", dbl);
	//ft_putendl(ft_dbltoa(dbl, 6));
	return (0);
}

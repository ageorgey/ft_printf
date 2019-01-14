#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

void			f(char *str, ...)
{
	s_format	*sf;
	va_list		ap;

	sf = init_struct();
	sf->type = "f";
	va_start(ap, str);
	sf = convert_f(sf, ap);
	ft_putendl(sf->str);
	va_end(ap);
}


int				main(int ac, char **av)
{
	double		nb;

	nb = 93.27;
	f("Bonjour", nb);
	return (0);
}

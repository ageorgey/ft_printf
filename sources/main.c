#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

void			f(char *str, ...)
{
	s_format	*sf;
	va_list		ap;

	init_struct(sf);
	sf->type = "X";
	va_start(ap, str);
	sf = convert_diouxX(sf, ap);
	ft_putendl(sf->str);
	va_end(ap);
}

int				main(int ac, char **av)
{
	f("B", 42);
	return (0);
}

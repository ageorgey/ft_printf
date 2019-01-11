#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

void			f(char *str, ...)
{
	va_list (ap);
	s_format	*sf;

	sf = init_struct();
	sf->type = "d";
	va_start(ap, str);
	convert_diouxX(sf, ap);
	va_end(ap);
}

int				main(int ac, char **av)
{
	f("Bonjour", 42);
	return (0);
}

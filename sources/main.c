#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

void			f(char *str, ...)
{
	s_format	*sf;
	va_list		ap;

	init_struct(sf);
	sf->type = "p";
	va_start(ap, str);
	sf = convert_csp(sf, ap);
	ft_putendl(sf->str);
	va_end(ap);
}


int				main(int ac, char **av)
{
	char		*str;

	str = ft_strnew(1);
	f("Bonjour", str);
	printf("%p\n", str);
	return (0);
}

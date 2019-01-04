#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

char			*convert_diouxX(va_list ap, s_format *sf)
{
	int			nb;

	if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'u')
	{
		nb = va_arg(ap, int);
		sf->str = ft_itoa(nb);
		ft_putendl(sf->str);
	}
	return (sf->str);
}

void			foo(char *fmt, ...)
{
	s_format	*sf;
	va_list		ap;

	sf = init_struct();
	sf->type[0] = 'd';
	va_start(ap, fmt);
	convert_diouxX(ap, sf);
	va_end(ap);
}

int				main()
{
	char		*fmt;

	fmt = "Ok";
	foo(fmt, 42);
	return (0);
}

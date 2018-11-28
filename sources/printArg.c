#include "../../libft/libft.h"
#include "../include/ft_printf.h"

void		printArg(char *format, ...)
{
	va_list			ap;
	static size_t	i;
	//int d;
	//char *c, *s;

	i = 0;
	va_start(ap, format);
	if (*format)
		switch (*format++)
		{
			case 's':
				//s = va_arg (ap, char *);
				ft_putstr(va_arg(ap, char *));
				break;
			case 'd':
				//d = va_arg (ap, int);
				ft_putnbr(va_arg(ap, int));
				break;
			case 'c':
				//c = va_arg (ap, char *);
				ft_putstr(va_arg(ap, char *));
				break;
		}
	va_end(ap);
}

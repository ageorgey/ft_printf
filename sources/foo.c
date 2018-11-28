#include "../../libft/libft.h"
#include "../include/ft_printf.h"

void		foo(char *fmt, ...)
{
	va_list ap;
	int d;
	char *c, *s;
	size_t i;

	va_start(ap, fmt);
	while (*fmt)
		switch (*fmt++)
		{
			case 's':
				s = va_arg (ap, char *);
				printf("chaîne %s\n", s);
				break;
			case 'd':
				d = va_arg (ap, int);
				printf("int %d\n", d);
				break;
			case 'c':
				c = va_arg (ap, char *);
				printf("char %c\n", c[0]);
				break;
		}
	va_end(ap);
}

int			main(int ac, char **av)
{
	foo(recherche(av[1]), "Adam", 28, "a");
	return (0);
}

#include "../../libft/libft.h"

int			sumnum(int num, ...)
{
	va_list ap;
	int sum;
	size_t count;

	sum = 0;
	va_start(ap, num);
	for (count = 0; count < num; count++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

void		printArg(int num, ...)
{
	va_list ap;
	size_t count;

	va_start(ap, num);
	for (count = 0; count < num; count++)
		ft_putstr(va_arg(ap, char *));
	va_end(ap);
}

void		foo(char *fmt, ...)
{
	va_list ap;
	int d;
	char *c, *s;

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
	ft_putnbr(sumnum(5, 7, 3, 4, 5, 74));
	ft_putchar('\n');
	printArg(3, "Yes ", "I ", "can\n");
	foo("sdc", "Adam", 28, "a");
	return (0);
}

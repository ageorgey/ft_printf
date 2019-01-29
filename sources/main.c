#include <stdio.h>
#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int					main()
{
	char		*str;
	size_t		age;

	str = "Adam";
	age = 28;
	ft_printf("Bonjour %s", str);
	return (0);
}

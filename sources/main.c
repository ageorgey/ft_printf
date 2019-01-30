#include <stdio.h>
#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int					main()
{
	char		*str;
	double		age;

	str = "0xadam";
	age = 28;
	ft_printf("Bonjour %f", age);
	//ft_putendl(ft_strupper(str));
	return (0);
}

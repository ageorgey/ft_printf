#include <stdio.h>
#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int					main()
{
	char		*str;
	int			age;

	str = "Adam";
	age = 28;
	printf("printf : %12s\n", str);
	ft_printf("ft_printf : %12s", str);
	return (0);
}

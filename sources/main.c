#include <stdio.h>
#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int					main()
{
	char		*s;
	int			diouxXb;
	double		f;

	s = "Adam";
	diouxXb = 93270;
	f = 93.270;
	printf("printf : %# 12x <--- l'original\n", diouxXb);
	ft_printf("ft_printf : %# 12x <--- le mien\n", diouxXb);
	return (0);
}

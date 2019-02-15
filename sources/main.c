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
	printf("printf : %# 12.2f %s <--- l'original\n", f, s);
	ft_printf("ft_printf : %# 12.2f %s <--- le mien\n", f, s);
	return (0);
}

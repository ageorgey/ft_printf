#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*gestion_type(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'c' || sf->type[0] == 's' || sf->type[0] == 'p')
		convert_csp(sf, ap);
	else if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'o'
		|| sf->type[0] == 'u' || sf->type[0] == 'x' || sf->type[0] == 'b')
		convert_diouxXb(sf, ap);
	
}

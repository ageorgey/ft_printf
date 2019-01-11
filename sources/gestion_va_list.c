#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

void			gestion_va_list(s_format *sf, size_t count, ...)
{
	va_list		ap;

	va_start(ap, count);
	if (count)
	{
		if (sf->type[0] == 's')
			sf->str = va_arg(ap, char*);
		--count;
	}
	ft_putendl(sf->str);
	va_end(ap);
}

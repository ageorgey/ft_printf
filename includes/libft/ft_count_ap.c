#include "libftprintf.h"

size_t				ft_count_ap(char *format)
{
	size_t			count;
	size_t			i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] && format[i] == '%' && format[++i] != '%')
			++count;
		++i;
	}
	return (count);
}

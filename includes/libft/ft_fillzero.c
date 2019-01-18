#include "libftprintf.h"

char			*ft_fillzero(size_t p)
{
	char		*str;
	size_t		i;

	i = 0;
	str = ft_strnew(p);
	while (i < p)
		str[i++] = '0';
	str[i] = '\0';
	return (str);
}

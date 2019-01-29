#include "libftprintf.h"

char			*ft_filltenth(size_t t, size_t p)
{
	char		*str;
	char		*tenth;
	size_t		i;

	i = 0;
	str = ft_fillzero(p);
	tenth = ft_itoa(t);
	while (i < p && str[i]  && tenth[i])
	{
		str[i] = tenth[i];
		i++;
	}
	return (str);
}
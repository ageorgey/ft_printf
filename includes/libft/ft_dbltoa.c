#include "libftprintf.h"

char			*ft_dbltoa(double nb)
{
	char		*str;
	size_t		*i;
	size_t		j;

	j = 0;
	i = ft_dbllen(nb);
	str = ft_strnew(i[0]);
	str = ft_itoa(i[1]);
	while (str[j])
		j++;
	str[j++] = '.';
	str = ft_strjoin(str, ft_itoa(i[2]));
	ft_putendl(str);
	return (str);
}


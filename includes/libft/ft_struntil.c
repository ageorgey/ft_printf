#include "libftprintf.h"

char			*ft_struntil(const char *str, int c)
{
	char		*s;
	size_t		i;

	i = 0;
	s = ft_strnew(ft_strnlen((char*)str, c));
	if (!str)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
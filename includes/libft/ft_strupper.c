#include "libftprintf.h"

char			*ft_strupper(char *str)
{
	int			i;
	char		*s;

	i = -1;
	s = ft_strdup(str);
	while (s[++i])
		s[i] = ft_toupper(s[i]);
	return (s);
}
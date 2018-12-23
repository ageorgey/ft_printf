#include "../includes/libft/libft.h"
#include "../includes/ft_printf.h"

int					ft_printf(const char *format, ...)
{
	s_format		*sf;

	sf = init_struct();
	ft_struntil(format, '%');
	return (1);
}

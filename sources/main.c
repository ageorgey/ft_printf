#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int				main(int ac, char **av)
{
	if (ac == 2)
		ft_putendl(next_format(av[1]));
	return (0);
}

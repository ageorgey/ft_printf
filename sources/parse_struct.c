/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:18 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 19:09:07 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libft.h"
#include "../includes/ft_printf.h"

char			*parse_flags(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	while ((format[i] == '#' || format[i] == '+' || format[i] == '-'
	|| format[i] == '0' || format[i] == ' ') && format[i])
		i++;
	sf->flags = ft_strnew(i);
	i = 0;
	while (format[i] == '#' || format[i] == '+' || format[i] == '-'
	|| format[i] == '0' || format[i] == ' ')
	{
		sf->flags[i] = format[i];
		i++;
	}
	sf->flags[i] = 0;
	return (&format[i]);
}

char			*parse_width(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	while (format[i] != '.' && format[i])
		i++;
	sf->width = ft_strnew(i);
	i = 0;
	while (format[i] != '.' && format[i])
	{
		sf->width[i] = format[i];
		i++;
	}
	return (&format[i] + 1);
}

char			*parse_precision(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	sf->precision = ft_strnew(1);
	if (format[i] >= '0' && format[i] <= '9' && format[i])
		sf->precision[i] = format[i];
	else if (format[i] == '-')
		sf->precision[i] = format[i];
	return (&format[i] + 1);
}

char			*parse_size(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	sf->size = ft_strnew(3);
	ft_strclr(sf->size);
	while (format[i] && (format[i] == 'h' || format[i] =='l' || \
	format[i] != 'L'))
	{
		sf->size[i] = format[i];
		i++;
	}
	return (&format[i] - 1);
}

char			*parse_type(char *format, s_format *sf)
{
	sf->type = ft_strnew(1);
	if (*format && (*format == 'c' || *format == 's' || *format == 'p'\
	|| *format == 'f'))
		*(sf->type) = *format;
	else
	{
		ft_putendl_fd("Type manquant ou non supporté", 2);
		EXIT_FAILURE;
	}
	return (format + 1);
}

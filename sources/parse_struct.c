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

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

char			*parse_flags(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	while (ft_isflags(format[i]))
		i++;
	sf->flags = ft_strnew(i);
	i = 0;
	while (ft_isflags(format[i]))
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
	while (ft_iswidth(format))
		i++;
	sf->width = ft_strnew(i);
	i = 0;
	while (ft_iswidth(format))
	{
		sf->width[i] = format[i];
		i++;
	}
	sf->width[i] = 0;
	return (&format[++i]);
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
	sf->precision[i + 1] = '\0';
	return (&format[++i]);
}

char			*parse_size(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	while (format[i] && (format[i] == 'h' || format[i] =='l' || \
	format[i] == 'L'))
		i++;
	sf->size = ft_strnew(i);
	i = 0;
	while (format[i] && (format[i] == 'h' || format[i] =='l' || \
	format[i] == 'L'))
	{
		sf->size[i] = format[i];
		i++;
	}
	sf->size[i] = 0;
	return (&format[i]);
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
	sf->type[1] = 0;
	return (format);
}

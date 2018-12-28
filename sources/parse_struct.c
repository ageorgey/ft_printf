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
	if (!ft_isflags(format[i]))
	{
		sf->flags = ft_strnew(0);
		return (format);
	}
	while (ft_isflags(format[i]))
		i++;
	sf->flags = ft_strnew(i);
	ft_strclr(sf->flags);
	i = 0;
	while (ft_isflags(format[i]))
	{
		sf->flags[i] = format[i];
		i++;
	}
	ft_putstr("format renvoyé par parse_flags : ");
	ft_putendl(&format[i]);
	return (&format[i]);
}

char			*parse_width(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	if (!ft_iswidth(format))
	{
		sf->width = ft_strnew(0);
		return (format);
	}
	while (format[i] && format[i] != '.' && !ft_issize(format[i]) \
	&& !ft_istype(format[i]))
		i++;
	sf->width = ft_strnew(i);
	ft_strclr(sf->width);
	i = 0;
	while (format[i] && format[i] != '.' && !ft_issize(format[i]) \
	&& !ft_istype(format[i]))
	{
		sf->width[i] = format[i];
		i++;
	}
	ft_putstr("format renvoyé par parse_width : ");
	ft_putendl(&format[i]);
	return (&format[i]);
}

char			*parse_precision(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	if (format[i] && format[i] != '.')
	{
		sf->precision = ft_strnew(0);
		return (format);
	}
	else if (format[i] && format[i] == '.')
	{
		i++;
		sf->precision = ft_strnew(1);
		ft_strclr(sf->precision);
		sf->precision[0] = format[i];
		ft_putstr("format renvoyé par parse_precision : ");
		ft_putendl(&format[++i]);
		return (&format[++i]);
	}
	return (format);
}

char			*parse_size(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	if (!ft_issize(format[i]))
	{
		sf->size = ft_strnew(0);
		return (format);
	}
	while (format[i] && ft_issize(format[i]))
		i++;
	sf->size = ft_strnew(i);
	i = 0;
	while (format[i] && ft_issize(format[i]))
	{
		sf->size[i] = format[i];
		i++;
	}
	sf->size[i] = 0;
	ft_putstr("format renvoyé par parse_size : ");
	ft_putendl(&format[i]);
	return (&format[i]);
}

char			*parse_type(char *format, s_format *sf)
{
	if (!ft_istype(*format))
	{
		sf->type = ft_strnew(0);
		return (format);
	}
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
	ft_putstr("format renvoyé par parse_type : ");
	ft_putendl(format);
	return (format);
}

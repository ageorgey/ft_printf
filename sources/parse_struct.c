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
	while (format[i] && format[i] != '.' && !ft_issize(format[i])
		&& !ft_istype(format[i]))
		i++;
	sf->width = ft_strnew(i);
	ft_strclr(sf->width);
	i = 0;
	while (format[i] && format[i] != '.' && !ft_issize(format[i])
		&& !ft_istype(format[i]))
	{
		sf->width[i] = format[i];
		i++;
	}
	return (&format[i]);
}

char			*parse_precision(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	if (format[i] && format[i] != '.')
		return (format);
	++i;
	if (format[i] && ft_isdigit(format[i]))
	{
		sf->precision = ft_strnew(1);
		sf->precision[0] = format[i];
	}
	return (&format[++i]);
}

char			*parse_size(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	sf->size = ft_strnew(2);
	ft_strclr(sf->size);
	if (format[i] && ft_issize(format[i]))
	{
		while (format[i] && ft_issize(format[i]))
		{
			sf->size[i] = format[i];
			i++;
		}
		return (&format[i]);
	}
	return (format);
}

char			*parse_type(char *format, s_format *sf)
{
	size_t		i;

	i = 0;
	sf->type = ft_strnew(1);
	if (format[i] && ft_istype(format[i]))
		sf->type[i] = format[i];
	return (&format[++i]);
}

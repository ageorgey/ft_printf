/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:18 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 19:09:07 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*init_struct()
{
	s_format		*sf;
	if (!(sf = (s_format*)malloc(sizeof(*sf))))
	{
		ft_putendl_fd("Allocation de mémoire impossible pour s_format !", 2);
		return (NULL);
	}
	else
	{
		sf->flags = NULL;
		sf->width = NULL;
		sf->precision = NULL;
		sf->size = NULL;
		sf->type = NULL;
		sf->str = NULL;
	}
	return (sf);
}

void				free_struct(s_format *sf)
{
	free(sf->flags);
	free(sf->width);
	free(sf->precision);
	free(sf->size);
	free(sf->type);
	free(sf->str);
}

s_format			*parse_format(char *format, s_format *sf)
{
	if (!(format = ft_strchr(format, '%') + 1))
		return (NULL);
	if (!*format || *format == '%')
	{
		if (!*format)
		{
			ft_putendl_fd("Aucun caractère après '%'", 2);
			EXIT_FAILURE;
		}
		else if (*format ==  '%')
		{
			sf->str[0] = *format;
			return (sf);
		}
	}
	format = parse_flags(format, sf);
	format = parse_width(format, sf);
	format = parse_precision(format, sf);
	format = parse_size(format, sf);
	format = parse_type(format, sf);
	return (sf);
}

char				*next_format(char *format)
{
	while (*format != '%')
		++format;
	while (!ft_istype(*format))
		++format;
	return (++format);
}

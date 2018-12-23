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
#include <stdio.h>

s_format			*parse_flags(char *format, s_format *sf)
{
	size_t			i;

	i = 0;
	while (format[i] == '#' || format[i] == '+' || format[i] == '-'
	|| format[i] == '0' || format[i] == ' ')
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
	return (sf);
}

f_format			*parse_width(char *format, s_format *sf)
{
	size_t			i;

	i = 0;
	
}

int			main(int ac, char **av)
{
	
	return (0);
}

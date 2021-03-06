/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:21:22 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 14:21:27 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*gestion_type(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'c' || sf->type[0] == 's' || sf->type[0] == 'p')
		convert_csp(sf, ap);
	else if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'o'
	|| sf->type[0] == 'u' || sf->type[0] == 'x' || sf->type[0] == 'X'
	|| sf->type[0] == 'b')
		convert_diouxXb(sf, ap);
	else if (sf->type[0] == 'f')
		convert_f(sf, ap);
	return (sf);
}

s_format			*gestion_size(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'd' || sf->type[0] == 'i')
		size_for_di(sf, ap);
	else if (sf->type[0] == 'o')
		size_for_o(sf, ap);
	else if (sf->type[0] == 'u')
		size_for_u(sf, ap);
	else if (sf->type[0] == 'x' || sf->type[0] == 'X')
		size_for_xX(sf, ap);
	else if (sf->type[0] == 'b')
		size_for_b(sf, ap);
	else if (sf->type[0] == 'f')
		size_for_f(sf, ap);
	else if (sf->type[0] == 'c')
		size_for_c(sf, ap);
	else if (sf->type[0] == 's')
		size_for_s(sf, ap);
	return (sf);
}

s_format			*gestion_precision(s_format *sf)
{
	if (sf->type[0] == 's')
		precision_for_s(sf);
	else if (sf->type[0] == 'f')
		precision_for_f(sf);
	else if (sf->type[0] == 'c' || sf->type[0] == 'p')
		return (sf);
	else
		precision_for_diouxXb(sf);
	return (sf);
}

s_format			*gestion_flags_width(s_format *sf)
{
	if (ft_strchr(sf->flags, '#'))
	{
		if (sf->type[0] == 'o' || sf->type[0] == 'x' || sf->type[0] == 'X')
			flag_sharp_for_oxX(sf);
		else if (sf->type[0] == 'f')
			flag_sharp_for_f(sf);
	}
	if (ft_strchr(sf->flags, '+'))
	{
		if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'f')
			flag_positive(sf);
	}
	width_for_all(sf);
	return (sf);
}

s_format			*gestion_all(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'f')
		gestion_precision(sf);
	if (!ft_issize(sf->size[0]))
		gestion_type(sf, ap);
	if (ft_issize(sf->size[0]))
		gestion_size(sf, ap);
	if (ft_atoi(sf->precision) > 0 && sf->type[0] != 'f')
		gestion_precision(sf);
	if (ft_isflags(sf->flags[0]) || ft_atoi(sf->width) > 0)
		gestion_flags_width(sf);
	return (sf);
}

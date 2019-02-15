/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_csp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:48:34 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 13:48:51 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

s_format			*convert_c(s_format *sf, va_list ap)
{
	sf->str = ft_strnew(1);
	sf->str[0] = (char)va_arg(ap, int);
	return (sf);
}

s_format			*convert_s(s_format *sf, va_list ap)
{
	sf->str = ft_strdup(va_arg(ap, char*));
	return (sf);
}

s_format			*convert_p(s_format *sf, va_list ap)
{
	char			*str;

	str = ft_strnew(2);
	str = "0x";
	sf->str = ft_itoa_base((size_t)va_arg(ap, void*), 16);
	sf->str = ft_strjoin(str, sf->str);
	return (sf);
}

s_format			*convert_csp(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'c')
		convert_c(sf, ap);
	else if (sf->type[0] == 's')
		convert_s(sf, ap);
	else if (sf->type[0] == 'p')
		convert_p(sf, ap);
	return (sf);
}

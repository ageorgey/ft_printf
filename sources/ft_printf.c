/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:18:09 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 14:21:04 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

int					ft_printf(const char *format, ...)
{
	va_list			ap;
	s_format		*sf;
	char			*fmt;
	char			*str;
	size_t			i;

	i = 0;
	va_start(ap, format);
	fmt = (char*)format;
	sf = init_struct();
	str = ft_strnew(1);
	while (i++ < 2)
	{
		str = ft_strjoin(str, ft_struntil(fmt, '%'));
		parse_format(fmt, sf);
		gestion_all(sf, ap);
		fmt = next_format(fmt);
		str = ft_strjoin(str, sf->str);
	}
	str = ft_strjoin(str, ft_struntil(fmt, 0));
	ft_putstr(str);
	va_end(ap);
	return (ft_strlen(str));
}

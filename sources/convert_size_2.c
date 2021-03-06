/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_size_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:17:05 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 14:17:44 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*size_for_f(s_format *sf, va_list ap)
{
	if (ft_strequ("l", sf->size))
		sf->str = ft_dbltoa(va_arg(ap, double), ft_atoi(sf->precision));
	else if (ft_strequ("L", sf->size))
		sf->str = ft_ldbltoa(va_arg(ap, long double), ft_atoi(sf->precision));
	return (sf);
 }

/*----------------------------------À REVOIR----------------------------------*/

s_format			*size_for_c(s_format *sf, va_list ap)
{
	sf->str = ft_strnew(1);
	if (ft_strequ("l", sf->size))
		sf->str[0] = va_arg(ap, wint_t);
	return (sf);
}

s_format			*size_for_s(s_format *sf, va_list ap)
{
	if (ft_strequ("l", sf->size))
		sf->str = va_arg(ap, char*);
	return (sf);
}

/*----------------------------------------------------------------------------*/

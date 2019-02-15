/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:15:38 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 14:15:49 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_f(s_format *sf, va_list ap)
{
	if (!ft_isdigit(sf->precision[0]))
		sf->str = ft_dbltoa(va_arg(ap, double), 0);
	else
		sf->str = ft_dbltoa(va_arg(ap, double), ft_atoi(sf->precision));
	return (sf);
}

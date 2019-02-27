/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_ap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:06:22 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:06:24 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t				ft_count_ap(char *format)
{
	size_t			count;
	size_t			i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] && format[i] == '%' && format[++i] != '%')
			++count;
		++i;
	}
	return (count);
}

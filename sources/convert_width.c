/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:17:52 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/15 14:17:56 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*width_for_all(s_format *sf)
{
	size_t			i[2];
	char			*str;
	
	i[0] = ft_atoi(sf->width) - (int)ft_strlen(sf->str);
	i[1] = 0;
	str = ft_strnew(i[0]);
	if (ft_atoi(sf->width) <= (int)ft_strlen(sf->str))
		return (sf);
	if (ft_strchr(sf->flags, '0'))
		flag_zero(sf);
	if (ft_strchr(sf->flags, '-'))
		flag_negative(sf);
	else
	{
		while (i[1] < i[0])
			str[i[1]++] = ' ';
		sf->str = ft_strjoin(str, sf->str);
	}
	return (sf);
}

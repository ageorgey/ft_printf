/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_bin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:59:03 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 23:06:48 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libftprintf.h"

long long       ft_atoll_base_bin(const char *str)
{
    size_t      i;
    long long   n;

    i = 0;
    n = 0;
    while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
            || str[i] == '\n' || str[i] == ' ')
        i++;
    while (str[i] == '0' || str[i] == '1')
    {
        n = n * 2 + (str[i] - '0');
        i++;
    }
    return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:57:21 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 17:11:50 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

typedef struct							element
{
	char				*struntil;
	char				*typeformat;
	struct element		*next;
}										element;
typedef struct							list
{
	size_t				size;
	element				*first;
	element				*last;
}										list;
list			*init_list();
element			*init_element();

#endif

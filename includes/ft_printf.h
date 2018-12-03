/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:57:21 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/03 18:30:15 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"

typedef struct							list
{
	size_t				size;
	list				*first;
	list				*end;
}										list;
typedef struct							element
{
	char				*struntil;
	char				*typeformat;
	struct element		*next;
}										element;
list			*init_list();
element			*init_element();

#endif

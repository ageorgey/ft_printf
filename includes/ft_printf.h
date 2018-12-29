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
# include "libft/libftprintf.h"

typedef struct		s_format
{
	char	*flags;
	char	*width;
	char	*precision;
	char	*size;
	char	*type;
}					s_format;
s_format			*init_struct();
char				*parse_flags(char *format, s_format *sf);
char				*parse_width(char *format, s_format *sf);
char				*parse_precision(char *format, s_format *sf);
char				*parse_size(char *format, s_format *sf);
void				parse_type(char *format, s_format *sf);

#endif

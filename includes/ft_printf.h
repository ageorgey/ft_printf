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
# include <stdarg.h>

typedef struct		s_format
{
	char	*flags;
	char	*width;
	char	*precision;
	char	*size;
	char	*type;
	char	*str;
}					s_format;
s_format			*init_struct();
s_format			*parse_format(char *format, s_format *sf);
char				*next_format(char *format);
char				*parse_flags(char *format, s_format *sf);
char				*parse_width(char *format, s_format *sf);
char				*parse_precision(char *format, s_format *sf);
char				*parse_size(char *format, s_format *sf);
char				*parse_type(char *format, s_format *sf);
void				gestion_va_list(s_format *sf, size_t count, ...);
s_format			*convert_diouxXb(s_format *sf, va_list ap);
s_format			*convert_csp(s_format *sf, va_list ap);
s_format			*convert_f(s_format *sf, va_list ap);
void				free_struct(s_format *sf);
s_format			*precision_for_diouxXb(s_format *sf);
s_format			*precision_for_f(s_format *sf);
s_format			*precision_for_s(s_format *sf);

#endif

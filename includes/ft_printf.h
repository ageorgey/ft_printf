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
# include <wchar.h>

int					ft_printf(const char *format, ...);
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
s_format			*convert_diouxXb(s_format *sf, va_list ap);
s_format			*convert_csp(s_format *sf, va_list ap);
s_format			*convert_f(s_format *sf, va_list ap);
void				free_struct(s_format *sf);
s_format			*precision_for_diouxXb(s_format *sf);
s_format			*precision_for_f(s_format *sf);
s_format			*precision_for_s(s_format *sf);
s_format			*flag_sharp_for_oxX(s_format *sf);
s_format			*flag_sharp_for_f(s_format *sf);
s_format			*flag_negative(s_format *sf);
s_format			*flag_positive(s_format *sf);
s_format			*flag_zero(s_format *sf);
s_format			*size_for_di(s_format *sf, va_list ap);
s_format			*size_for_o(s_format *sf, va_list ap);
s_format			*size_for_u(s_format *sf, va_list ap);
s_format			*size_for_xX(s_format *sf, va_list ap);
s_format			*size_for_b(s_format *sf, va_list ap);
s_format			*size_for_f(s_format *sf, va_list ap);
s_format			*size_for_c(s_format *sf, va_list ap);
s_format			*size_for_s(s_format *sf, va_list ap);
s_format			*width_for_all(s_format *sf);
s_format			*gestion_all(s_format *sf, va_list ap);

#endif

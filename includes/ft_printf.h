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

typedef struct		s_format
{
	char	*flags;
	char	*width;
	char	*precision;
	char	*size;
	char	*type;
}					s_format;
s_format			*init_struct();
s_format			*parse_flags(char *format, s_format *sf);
s_format			*parse_width(char *format, s_format *sf);
s_format			*parse_precision(char *format, s_format *sf);
s_format			*parse_size(char *format, s_format *sf);
s_format			*parse_type(char *format, s_format *sf);

#endif

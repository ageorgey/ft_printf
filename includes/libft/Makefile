# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/17 14:15:27 by ageorgey          #+#    #+#              #
#    Updated: 2018/11/25 15:16:19 by ageorgey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =   libftprintf.a

FLAGS   =   -Wall -Werror -Wextra

DIR		=	../../sources/

C_LIB =  ft_memset.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_istype.c
C_LIB += ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strlen.c ft_isflags.c
C_LIB += ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_iswidth.c
C_LIB += ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_issize.c
C_LIB += ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_intlen.c
C_LIB += ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_count_ap.c
C_LIB += ft_isprint.c ft_toupper.c ft_tolower.c ft_strnew.c ft_itoa_base.c
C_LIB += ft_memalloc.c ft_memdel.c ft_strdel.c ft_strclr.c ft_power.c
C_LIB += ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_dbllen.c
C_LIB += ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c
C_LIB += ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c
C_LIB += ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
C_LIB += ft_putnbr_fd.c ft_strlcat.c ft_strnlen.c ft_memnlen.c ft_longlen.c
C_LIB += ft_countchar.c ft_strpchr.c ft_struntil.c ft_dbltoa.c ft_llonglen.c
C_LIB += ft_longtoa.c ft_longtoa_base.c ft_llongtoa.c ft_llongtoa_base.c
C_LIB += ft_ldbllen.c ft_ldbltoa.c ft_fillzero.c ft_base_supp.c ft_filltenth.c

C_SRC =  $(DIR)convert_csp.c $(DIR)convert_diouxXb.c $(DIR)convert_f.c 
C_SRC += $(DIR)convert_flags.c $(DIR)convert_width.c $(DIR)parse_struct.c
C_SRC += $(DIR)convert_precision.c $(DIR)convert_size.c $(DIR)convert_size_2.c
C_SRC += $(DIR)ft_printf.c $(DIR)gestion_convert.c $(DIR)gestion_struct.c

O_LIB =  ft_memset.o ft_bzero.o ft_memccpy.o ft_memchr.o ft_struntil.o
O_LIB += ft_memcmp.o ft_memcpy.o ft_memmove.o ft_strlen.o ft_istype.o
O_LIB += ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_isflags.o
O_LIB += ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strlcat.o
O_LIB += ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_strncmp.o ft_atoi.o
O_LIB += ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_iswidth.o
O_LIB += ft_isprint.o ft_toupper.o ft_tolower.o ft_strnew.o ft_issize.o
O_LIB += ft_memalloc.o ft_memdel.o ft_strdel.o ft_strclr.o ft_intlen.o
O_LIB += ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o
O_LIB += ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o
O_LIB += ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o
O_LIB += ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
O_LIB += ft_strnlen.o ft_memnlen.o ft_countchar.o ft_strpchr.o ft_count_ap.o
O_LIB += ft_itoa_base.o ft_power.o ft_dbllen.o ft_dbltoa.o ft_longlen.o
O_LIB += ft_llonglen.o ft_longtoa.o ft_longtoa_base.o ft_llongtoa.o ft_base_supp.o
O_LIB += ft_llongtoa_base.o ft_ldbllen.o ft_ldbltoa.o ft_fillzero.o ft_filltenth.o

O_SRC =  convert_csp.o convert_diouxXb.o convert_f.o convert_flags.o
O_SRC += convert_precision.o convert_size.o convert_size_2.o convert_width.o
O_SRC += ft_printf.o gestion_convert.o gestion_struct.o parse_struct.o

all     :   $(NAME)

$(NAME) :
	@gcc -c $(C_LIB) $(C_SRC) $(FLAGS) -I.
	@ar rc $(NAME) $(O_LIB) $(O_SRC)
	@ranlib $(NAME)

clean   :
	@rm -f $(O_LIB) $(O_SRC)

fclean  : clean
	@rm -f $(NAME)

re      : fclean all

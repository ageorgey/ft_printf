/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:43:54 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 23:09:20 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int nbr, size_t base);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
size_t				ft_strnlen(char *str, char c);
size_t				ft_intlen(int nbr, size_t base);
size_t				ft_memnlen(void *s, char c);
size_t				ft_countchar(const char *str, int c);
char				*ft_strpchr(const char *s, int c);
char				*ft_struntil(const char *str, int c);
int					ft_isflags(int c);
int					ft_iswidth(char *str);
int					ft_issize(int c);
int					ft_istype(int c);
size_t				ft_count_ap(char *format);
size_t				*ft_dbllen(double nb, size_t p);
char				*ft_dbltoa(double nb, size_t p);
size_t				*ft_ldbllen(long double nb, size_t p);
char				*ft_ldbltoa(long double nb, size_t p);
size_t				ft_power(size_t nbr, size_t power);
char				*ft_longtoa(long n);
char				*ft_llongtoa(long long n);
char				*ft_longtoa_base(long nbr, size_t base);
char				*ft_llongtoa_base(long long nbr, size_t base);
size_t				ft_longlen(long nbr, size_t base);
size_t				ft_llonglen(long long nbr, size_t base);
char				*ft_fillzero(size_t p);
char				*ft_fillone(size_t p);
char				*ft_filltenth(size_t t, size_t p);
char				*ft_base_supp(char *str, int nbr, size_t base, size_t i);
char				*ft_strupper(char *str);
long long           ft_atoll_base_bin(const char *str);

#endif

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "../../libft/libft.h"

typedef struct							Element
{
	char				*strUntil;
	char				typeFormat;
	void				*typeArg;
	struct Element		*suivant;
}										Element;
typedef struct							List
{
	size_t				taille;
	Element				*premier;
	Element				*dernier;
}										List;
List			*strUntil(char *format, List *list);
List			*rechercheType(char *format, List *list);
void			printArg(char *format, ...);
List			*initList();
Element			*initElement();
List			*pushBack(List *list);
void			printList(List *list);

#endif

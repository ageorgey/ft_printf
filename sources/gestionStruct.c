#include "../../libft/libft.h"
#include "../include/ft_printf.h"

List			*initList()
{
	List		*list;

	if (!(list = (List*)malloc(sizeof(list))))
	{
		ft_putendl_fd("Erreur : allocation de mémoire impossible pour\
		initList", 2);
		EXIT_FAILURE;
	}
	else
	{
		list->taille = 0;
		list->premier = NULL;
		list->dernier = NULL;
	}
	return (list);
}

Element			*initElement()
{
	Element		*element;

	if (!(element = (Element*)malloc(sizeof(element))))
	{
		ft_putendl_fd("Erreur : allocation de mémoire impossible pour\
		initElement", 2);
		EXIT_FAILURE;
	}
	else
	{
		element->strUntil = NULL;
		element->typeFormat = 0;
		element->typeArg = NULL;
		element->suivant = NULL;
	}
	return (element);
}

/*List			*pushBack(List *list)
{
	Element		*nvElement;

	nvElement = initElement();
	ft_putendl("step 1 pushBack OK");
	element->suivant = nvElement;
	ft_putendl("step 2 pushBack OK");
	nvElement->precedent = element;
	ft_putendl("step 3 pushBack OK");
	return (list);
}

void			printList(List *list)
{
	while (list->suivant != NULL)
	{
		ft_putstr(list->strUntil);
		//convertir les typeFormat avant de print typeArg
		list = list->suivant;
	}
}*/

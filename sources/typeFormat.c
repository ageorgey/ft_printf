#include "../../libft/libft.h"
#include "../include/ft_printf.h"

/*List			*strUntil(char *format, List *list)
{
	char				*str;
	size_t				i;
	size_t				j;
	Element				*element;

	i = 0;
	j = i;
	element = list->premier;
	while (format[j++])
	{
		if (format[j] == '%' && format[j + 1] == '%')
			j += 2;
		else if (format[j] == '%' && format[j + 1] != '%')
		{
			element->strUntil = ft_strsub(format, i, j);
			element = element->suivant;
			j += 2;
		}
		i = j;
	}
	return (list);
}*/

/*List			*rechercheType(char *format, List *list)
{
	Element		*element;
	size_t		i;

	element = initElement();
	ft_putendl("étape 0");
	list->premier = element;
	ft_putendl("étape 1");
	i = 0;
	while (format[i++])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			element->typeFormat = format[i + 1];
			ft_putendl("étape 2");
			list->taille++;
			element->suivant = initElement();
			ft_putendl("étape 3");
			element = element->suivant;
			ft_putendl("étape 4");
			list->dernier = element;
			ft_putendl("étape 5");
		}
	}
	ft_putnbr(list->taille);
	ft_putchar('\n');
	printf("adresse du premier élément --> %p\n", &list->premier);
	printf("adresse du dernier élément --> %p\n", &list->dernier);
	return (list);
}*/

List			*malloc_list(char *format, List *list)
{
	Element		*element;
	size_t		i;

	i = 0;
	element = initElement();
	ft_putendl("étape 0");
	list->premier = element;
	ft_putendl("étape 1");
	while (format[i++])
	{
		if (format[i] == '%' && format[i + 1] != '%')
			list->taille++;
	}
	ft_putendl("étape 2");
	i = 1;
	printf("adresse de l'élément n° %zu  --> %p\n", i, &element);
	if (list->taille == 1)
		return (list);
	ft_putendl("étape 3");
	while (i < list->taille)
	{
		ft_putendl("étape 4");
		element = element->suivant;
		ft_putendl("étape 5");
		element = initElement();
		printf("adresse de l'élément n° %zu  --> %p\n", i, &element);
		i++;
	}
	list->dernier = element;
	ft_putendl("étape 6");
	ft_putnbr(list->taille);
	ft_putchar('\n');
	printf("adresse de list->premier --> %p\n", &list->premier);
	printf("adresse de list->dernier --> %p\n", &list->dernier);
	return (list);
}

int				main(int ac, char **av)
{
	List		*list;
	char		*format;
	size_t		i;

	format = av[1];
	list = initList();
	malloc_list(format, list);
	free(list);

	return (0);
}

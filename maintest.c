#include "libft.h"

int main()
{
	char **tab;

	tab = ft_double_memalloc(4, 20);
	tab[0][0] = 'a';

	printf("%c\n", tab[0][0]);
		return (0);
}
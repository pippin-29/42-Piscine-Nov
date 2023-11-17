#include <stdio.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char ptr;

	ptr = arr;
	printf("%s\n", arr);
	printf("%s\n", ft_strcapitalize(ptr));
	return (0);
}

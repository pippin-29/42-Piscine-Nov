#include "ft_strcapitalize.c"
#include <stdio.h>

int	main(void)
{
	char	arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*ptr2;
	printf("%s\n", arr);
	ptr2 = ft_strcapitalize(arr);
	
	printf("%s\n", ptr2);
	return (0);
}

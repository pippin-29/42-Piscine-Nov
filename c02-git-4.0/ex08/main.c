#include <stdio.h>
#include "ft_strlowcase.c"

int	main(void)
{
	char arr[] = "HELLO WORLD!";
	char *ptr;

	ptr = arr;
	printf("%s\n", arr);
	printf("%s\n", ft_strlowcase(ptr));
	return (0);
}

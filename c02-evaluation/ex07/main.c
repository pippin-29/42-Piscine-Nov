#include <stdio.h>
#include "ft_strupcase.c"

int	main(void)
{
	char arr[] = "hello world!";
	char *ptr;

	ptr = arr;
	printf("%s\n", arr);
	printf("%s\n", ft_strupcase(ptr));
	return (0);
}

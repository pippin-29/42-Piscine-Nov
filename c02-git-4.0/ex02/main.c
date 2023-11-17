#include <stdio.h>
#include "ft_str_is_alpha.c"

int	main(void)
{
	char arr[] = "ABCDEfghij0";
	char *ptr;

	ptr = arr;

	printf("%d", ft_str_is_alpha (ptr));
	return (0);
}


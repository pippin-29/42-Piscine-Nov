#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	char arr[] = "ABCDEfghij0";
	char arr2[] = "012947856389";
	char *ptr1;
	char *ptr2;

	ptr1 = arr;
	ptr2 = arr2;
	printf("%s: %d\n",arr,  ft_str_is_numeric(ptr1));
	printf("%s: %d\n",arr2,  ft_str_is_numeric(ptr2));
	return (0);
}

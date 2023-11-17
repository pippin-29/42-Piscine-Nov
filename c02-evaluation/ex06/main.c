#include <stdio.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	char arr[] = "abhjsfvkljn2345o908y2354970y";
	char *ptr;

	ptr = arr;
	printf("%s: %d\n", arr, ft_str_is_printable(ptr));
	return (0);
}

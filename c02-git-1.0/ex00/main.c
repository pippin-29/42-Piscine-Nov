#include "ft_strcpy.c"
#include <stdio.h>

int	main(void)
{
	
	char arr[] = "OLD STRING!";
	char *ptr;

	ptr = arr;

	printf("%s", arr);
	ptr  =  ft_strcpy(arr, "New String");
	
	printf("%s", arr);	
	return (0);
}

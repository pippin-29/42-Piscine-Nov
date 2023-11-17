#include "ft_strncpy.c"
#include <stdio.h>

int	main(void)
{
	
	char arr[] = "OLD STRING!";
	char *ptr;

	ptr = arr;

	printf("%s", arr);
	ptr  =  ft_strncpy(arr, "New String", 2);
	
	printf("%s", arr);	
	return (0);
}


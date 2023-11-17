#include <stdio.h>
#include "ft_strjoin.c"

int	main(void)
{
	char *arr[4];
		
	char *sep;
	
	arr[0] = "Hello";
	arr[1] = "I";
	arr[2] = "Quinces";
	arr[3] = "Wonderful";
	sep = "!";
	
	printf("%s\n", ft_strjoin(sizeof(arr), arr, sep));
	return (0);
}

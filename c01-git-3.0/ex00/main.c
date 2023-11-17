#include "ft_ft.c"
#include <stdio.h>

int	main(void)
{
	int x;

	x = 43;
	printf("before function call: x =  %4d\n", x);
	ft_ft(&x);
	printf("after function call:  x =  %4d\n", x);
}

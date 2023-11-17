#include "ft_ultimate_ft.c"
#include <stdio.h>

int	main(void)
{
	int x;
	int *nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5;
	int ******nbr6, *******nbr7, ********nbr8, *********nbr9;

	x = 43;
	nbr1 = &x;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	printf("Before function call: x = %4d\n", x);
	ft_ultimate_ft(nbr9);
	printf("After function call:  x = %4d\n", x);
}


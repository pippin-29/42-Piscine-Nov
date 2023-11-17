#include <stdio.h>
#include "ft_iterative_factorial.c"

int main(void)
{
	printf(" 4! =  24 = %d\n",ft_iterative_factorial(4));
	printf(" 5! = 120 = %d\n",ft_iterative_factorial(5));
	printf("-1! =   0 = %d\n",ft_iterative_factorial(-1));
	printf(" 0! =   1 = %d\n",ft_iterative_factorial(0));
	return (0);
}

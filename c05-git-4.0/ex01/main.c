#include "ft_recursive_factorial.c"
#include <stdio.h>

int main(void)
{
	int x;

	x = 4;
	printf(" 4! =        24 = %d\n", ft_recursive_factorial(x));
	printf(" 3! =         6 = %d\n", ft_recursive_factorial(3));
	printf("12! = 479001600 = %d\n", ft_recursive_factorial(12));
	printf(" 0! =         1 = %d\n", ft_recursive_factorial(0));
	
	return (0);
}

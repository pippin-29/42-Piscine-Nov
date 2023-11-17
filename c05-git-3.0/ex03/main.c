#include "ft_recursive_power.c"
#include <stdio.h>

int	main(void)
{
	int x;

	x = 0;
	printf("4 to the power of 4  = %d\n", ft_recursive_power(4, 4));
	printf("46340 to the power of 2 = %d\n", ft_recursive_power(46340, 2));
	printf("0 to the power of 0  = %d\n", ft_recursive_power(0, 0));
	printf("2 to the power of -2 = %d\n", ft_recursive_power(2, -2));
	printf("Sizeof(Int) = %lu\n", sizeof(x));
	return (0);
}

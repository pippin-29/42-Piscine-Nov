#include "ft_recursive_power.c"
#include <stdio.h>

int	main(void)
{
	printf("4 to the power of 4  = %d\n", ft_recursive_power(4, 4));
	printf("-4 to the power of 4 = %d\n", ft_recursive_power(-4, 4));
	printf("0 to the power of 0  = %d\n", ft_recursive_power(0, 0));
	return (0);
}

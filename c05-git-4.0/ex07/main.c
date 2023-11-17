#include "ft_find_next_prime.c"
#include <stdio.h>

int	main(void)
{
		printf("   3, Next Prime: %4d, %3d\n", ft_find_next_prime(3), ft_is_prime(3));
		printf("  42, Next Prime: %4d, %3d\n", ft_find_next_prime(42), ft_is_prime(43));
		printf(" 999, Next Prime: %4d, %3d\n", ft_find_next_prime(999), ft_is_prime(1009));
		printf("1054, Next Prime: %4d, %3d\n", ft_find_next_prime(1054), ft_is_prime(1061));
		return (0);
}


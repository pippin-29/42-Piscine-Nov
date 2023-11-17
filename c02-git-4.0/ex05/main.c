#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	char arr1[] = "ABCDEFGHIJK";
	char arr2[] = "ABCdefg095&";
	char *ptr1;
	char *ptr2;

	ptr1 = arr1;
	ptr2 = arr2;
	printf("%s: %d\n", arr1, ft_str_is_uppercase(arr1));
	printf("%s: %d\n", arr2, ft_str_is_uppercase(arr2));

	return (0);
}

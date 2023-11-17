#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "ABCdefg095&";
	char *ptr1;
	char *ptr2;

	ptr1 = arr1;
	ptr2 = arr2;
	printf("%s: %d\n", arr1, ft_str_is_lowercase(arr1));
	printf("%s: %d\n", arr2, ft_str_is_lowercase(arr2));

	return (0);
}

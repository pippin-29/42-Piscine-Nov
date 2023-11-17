#include "ft_rev_int_tab.c"
#include<stdio.h>
#define INDEX 7

int	main(void)
{
	int	arr[INDEX] = {1, 2, 3, 4, 5, 6, 7};
	int index;
	index = 0;
	
	printf("Array before reversal: ");
	while(index < INDEX)
	{
		printf("%d, ", arr[index]);
		index++;
	}
	printf("\n");

	ft_rev_int_tab(arr, INDEX);
	index = 0;
	printf("Array after reversal: ");
	while(index < INDEX)
	{
		printf("%d, ", arr[index]);
		index++;
	}
	printf("\n");
	return (0);
}


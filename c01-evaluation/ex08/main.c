#include "ft_sort_int_tab.c"
#include <stdio.h>
int	main(void)
{
    int tab[4] = {3,5,3,6};
    int size = 4;
	
    printf("The array before sorting :  %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
	
    ft_sort_int_tab(tab, size);

    printf("The Array after sorting :  %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
} 

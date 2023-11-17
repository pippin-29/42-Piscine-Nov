#include <stdio.h>
#include "ft_strjoin.c"

int main(int argc, char **argv)
{	
	if (argc)
		printf("%s\n",ft_strjoin(argc, argv, "!!"));
	return (0);
}

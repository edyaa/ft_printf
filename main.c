# include "header.h"
#include <stdio.h>
int 	main(void)
{
	int ac = printf("a|%09s\n", "hi low");
	int bc = ft_printf("b|%09s\n", "hi low");
	printf("[%i][%i]\n", ac, bc);
	return (0);
}
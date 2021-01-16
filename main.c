# include "header.h"
#include <stdio.h>

int 	main(void)
{
	char * a = "hello";
	int ac = printf(" a| %.5p\n", 0);
	int bc = ft_printf(" b| %.5p\n", 0);
	printf("[%i][%i]\n", ac, bc);
	return (0);
}
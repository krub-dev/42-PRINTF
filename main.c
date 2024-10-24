#include "ft_printf.h"

int	main(void)
{
	char	chr = 'c'; //char
	char	*str = "Acho"; //string
	void	*pntr; //puntero, con & para la direccion
	int	num_d_i = -42; //numero entero (positivos y negativos)
	unsigned int	num_u = -2; //entero sin signo (solo positivos, y 0. Cubre negativos)
	int	num_hex_minus = 42;	//numero hexadecimal minus (42 = 2a)
	int	num_hex_mayus = 42;	//numero hexadecimal mayus (42 = 2A)
/*
	//TEST GENERAL
	printf("\n---------------PROPIA--------------------\n");
	printf("Resultado de PROPIA es: %d", ft_printf("Character: %c\nString: %s\nPuntero: %p\nEntero/Decimal: %i / %d\nNum. Positivo: %u\nHexadecimal Minus/Mayus: %x / %X\nPorcentaje: %%\n", chr, str, &pntr, num_d_i, num_d_i, num_u, num_hex_minus, num_hex_mayus));
	
	printf("\n--------------ORIGINAL-------------------\n");
	printf("Resultado de ORIGINAL es: %d", printf("Character: %c\nString: %s\nPuntero: %p\nEntero/Decimal: %i / %d\nNum. Positivo: %u\nHexadecimal Minus/Mayus: %x / %X\nPorcentaje: %%\n", chr, str, &pntr, num_d_i, num_d_i, num_u, num_hex_minus, num_hex_mayus));
*/
	//TEST INDIVIDUAL
	printf("\n**********************************************\n");
	printf("\n**********TEST PRINTF****FRUBIO-I*************\n\n");
//	
	printf("\n****************CHARACTER*********************\n\n");
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Character: %d\n\n", printf("Character: %c\n", chr)); 
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Character: %d\n\n", ft_printf("Character: %c\n", chr)); 
//	
	printf("\n*******************STRING*********************\n\n");
	
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador String: %d\n\n", printf("String: %s\n", str)); 
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador String: %d\n\n", ft_printf("String: %s\n", str)); 

//	
	printf("\n******************PUNTERO*********************\n\n");
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Puntero: %d\n\n", printf("Puntero: %p\n", &pntr)); 
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Puntero: %d\n\n", ft_printf("Puntero: %p\n", &pntr)); 
//	
	printf("\n***************ENTERO/DECIMAL*****************\n\n");

	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Entero: %d\n\n", printf("Entero: %i\n", num_d_i));
	printf("Contador Decimal: %d\n\n", printf("Decimal: %d\n", num_d_i));

	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Entero: %d\n\n", ft_printf("Entero: %i\n", num_d_i));
	printf("Contador Decimal: %d\n\n", ft_printf("Decimal: %d\n", num_d_i));
//
	printf("\n******************UNSIGNED********************\n\n");
	
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Unsigned: %d\n\n",	printf("Num. Positivo Unsigned: %u\n", num_u)); 
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Unsigned: %d\n\n", ft_printf("Num. Positivo Unsigned: %u\n", num_u)); 	
//
	printf("\n**************HEXADECIMAL*********************\n\n");
	
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Hex. Mayus: %d\n\n", printf("Hexadecimal Mayus: %X\n", num_hex_mayus)); 
	printf("Contador Hex. Minus: %d\n\n", printf("Hexadecimal Minus: %x\n", num_hex_minus));
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Hex. Mayus: %d\n\n", ft_printf("Hexadecimal Mayus: %X\n", num_hex_mayus)); 
	printf("Contador Hex. Minus: %d\n\n", ft_printf("Hexadecimal Minus: %x\n", num_hex_minus));
//	
	printf("\n**************PORCENTAJE**********************\n\n");
	
	printf("------ORIGINAL--------------------------------\n\n");
	printf("Contador Porcentaje: %d\n\n", printf("Porcentaje: %%\n")); 
	
	printf("------PROPIA----------------------------------\n\n");
	printf("Contador Porcentaje: %d\n\n", ft_printf("Porcentaje: %%\n")); 

	return (0);
}

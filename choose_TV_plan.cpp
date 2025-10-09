#include <stdio.h> 
#include <conio.h>
#include <locale.h>


int opcion;
int tv_extra;
int precio_base1, precio_base2, precio_base3, precio_base4, precio_base5;
int precio_total;
int precio_tv_extra = 129;

main()
 
{
	
	printf("\n 1) El plan 1 cuesta 600 MXN, que incluye 200 Megas \n");
	printf("\n 2) El plan 2 cuesta 710 MXN, que incluye 300 Megas \n");
	printf("\n 3) El plan 3 cuesta 820 MXN, que incluye 500 Megas \n");
	printf("\n 4) El plan 4 cuesta 1000 MXN, que incluye 1200 Megas \n");
	printf("\n 5) El plan 5 cuesta 1640 MXN, que incluye 1200 Megas \n");
	printf("Cual pan eliges?");
	scanf("%d", &opcion);
	
	
	switch(opcion)
	{
		case 1: 
				printf("Elegiste el plan 1! \n");
				printf("Tienes alguna TV extra? (costo extra de 129 MXN c/u)");
				scanf("%d", &tv_extra);
				precio_base1 = 600;
				precio_total = tv_extra * precio_tv_extra + precio_base1;
				printf("Tu precio total para este plan es: %d", precio_total);
				break;
		case 2: 
				printf("Elegiste el plan 2! \n");
				printf("Tienes alguna TV extra? (costo extra de 129 MXN c/u)");
				scanf("%d", &tv_extra);
				precio_base2 = 710;
				precio_total = tv_extra * precio_tv_extra + precio_base2;
				printf("Tu precio total para este plan es: %d", precio_total);
				break;
		case 3: 
				printf("Elegiste el plan 3! \n");
				printf("Tienes alguna TV extra? (costo extra de 129 MXN c/u)");
				scanf("%d", &tv_extra);
				precio_base3 = 820;
				precio_total = tv_extra * precio_tv_extra + precio_base3;
				printf("Tu precio total para este plan es: %d", precio_total);
				break;
		case 4:
				printf("Elegiste el plan 4! \n");
				printf("Tienes alguna TV extra? (costo extra de 129 MXN c/u)");
				scanf("%d", &tv_extra);
				precio_base4 = 1000;
				precio_total = tv_extra * precio_tv_extra + precio_base4;
				printf("Tu precio total para este plan es: %d", precio_total);
				break;
		case 5:
				printf("Elegiste el plan 5! \n");
				printf("Tienes alguna TV extra? (Costo extra de 129 MXN c/u) ");
				scanf("%d", &tv_extra);
				precio_base5 = 1640;
				precio_total = tv_extra * precio_tv_extra + precio_base5;
				printf("Tu precio total para este plan es: %d", precio_total);
				break;		
		
		default: printf("\n La opción no existe ");
	}
	getch();
		
printf("Da ENTER para salir del programa");
	
}

#include <stdio.h>
#include <conio.h>


int alumnos;
int votos_finales;
int votos;
int votos_roja;
int votos_morada;
int votos_azul;
int votos_nulos;
int ganador;
int empate_votos;
int i;


int main()

{
printf("Bienvenido al programa para contar las votaciones de CUCEA \n");
printf("Porfavor, ingresa el numero de alumnos: ");
scanf("%d", &alumnos);
 if (alumnos <= 0) {
        printf("Error: Numero de estudiantes invalido.\n");
        return 1;
    }else {
	 printf("A iniciar a contar votos!\n");
}
 for (i=1; i<= alumnos; i++) //++i 
 {
 
printf("\n Bienvenido estudiante %d\n");
printf("----\n");
printf("Existen las siguientes 3 plantillas, cual es tu voto (seleccionar)\n");
printf("\n 1) Plantilla Roja");
printf("\n 2) Plantilla Morada");
printf("\n 3) Plantilla Azul");
printf("\n 4) Voto nulo\n");
printf("Cual es su voto?\n");
printf("----\n");

	scanf("%d", &votos_finales);
	if (votos_finales <= 0) {
             printf("Error: Entrada no válida, por favor ingrese un número.\n");
    }else
    	

switch (votos_finales)
    {
    	case 1: 
    		votos_roja++;
    		printf("Se eleigio Plantilla Roja\n");
    		printf("La respuesta fue recibida, da enter para continuar.\n");
    		break;
    	case 2:
    		votos_morada++;
    		printf("Se eleigio Plantilla Morada\n");
    		printf("La respuesta fue recibida, da enter para continuar.\n");
    		break;
    	case 3:
    		votos_azul++;
    		printf("Se eleigio Plantilla Azul\n");
    		printf("La respuesta fue recibida, da enter para continuar.\n");
    		break;
    	case 4:
    		votos_nulos++;
    		printf("Se eleigio hacer su voto nulo\n");
    		printf("La respuesta fue recibida, da enter para continuar.\n");
    		break;
    	default:
    		printf("No se recibio ningun dato\n");
    		break;
    	
    	printf("Gracias por dar el resultado, se movera al siguinte estudiante\n");
	}
	getch();
	
	
	
}

	printf("----");
	printf("\n Los resultados de las votaciones fueron los siguientes\n");
	printf("Plantilla Azul: %d\n", votos_azul);
	printf("Plantilla Roja: %d\n", votos_roja);
	printf("Plantilla Morada: %d\n", votos_morada);
	printf("Votos nulo: %d\n", votos_nulos);
			
	if (votos_azul > votos_roja && votos_azul > votos_morada)
		printf("Gano la plantilla Azul!\n");
		else if(votos_roja > votos_azul && votos_roja > votos_morada)
			printf("Gano la plantilla Roja!\n");
			else if (votos_morada > votos_roja && votos_morada > votos_azul)
				printf("Gano la plantilla Morada!\n");
				else if(votos_nulos > votos_azul && votos_nulos > votos_roja && votos_nulos > votos_morada)
						printf("Ganaron los votos \n");
				else
				{
					printf("Empate! \n");
						if (votos_azul == votos_roja && votos_azul == votos_morada)
							printf("Azul, Roja y Morada\n");
						else if(votos_azul == votos_morada)
							printf("Azul y Morada\n");
						else if(votos_roja == votos_morada)
							printf("Roja y Morada\n");		
						else if(votos_azul == votos_roja)
							printf("Azul y Roja\n");
								
				}
printf("----\n");
printf("Puedes salir del programa dando ENTER :)");
}


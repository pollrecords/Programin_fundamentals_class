#include <iostream>
using namespace std;
#include <string.h>
// Pracica lab

struct laboratorio{
	char ubicacion[6];
	int num_comp;
	int funcionalidad[2];
};

void imprimir (laboratorio a[]){
	int i;
	for (i=0; i<5; i++){
		cout << "Ubicacion:   " << a[i].ubicacion <<  endl;
		cout << "Computadoras:   " <<a[i].num_comp << endl;
		cout << "Funcionales:   " <<a[i].funcionalidad[0] << endl;
		cout << "No funcionales:   " <<a[i].funcionalidad[1] << "\n" << endl;

	}
}

int no_fun(laboratorio b[]){ //ej4
	int i;
	for (i=0; i<5; i++){
		b[i].funcionalidad[1] = b[i].num_comp - b[i].funcionalidad[0];
	}
	return b[i].funcionalidad[1];
}


void imprimir_3_nofunc (laboratorio c[]){ //ej5
	cout << "Laboratorios con 3 descompuestas:" << endl;
	int i;
	for (i = 0; i<5; i++){
		if (c[i].funcionalidad[1] > 3){
			cout << c[i].ubicacion << "\n" << endl;
		}
	}	
}
void lab_disponible (laboratorio d[]){ //ej7
	cout << "Laboratorios con mas de 15 computadoras" << endl;
	int i;
	for (i = 0; i<5; i++){
		if (d[i].funcionalidad[0] >= 15){
			cout << d[i].ubicacion << "\n" << endl;
		}
	}	
}

int total_nofunc(laboratorio e[]){ //ej6
	cout << "Computadoras descompuestas" <<endl;
	int i, total = 0;
	for (i=0; i<5; i++){
		total += e[i].funcionalidad[1];
	}
	return total;
}

/*
Implemente una función que ordene 
de menor a mayor el arreglo de laboratorios con respecto al total de computadoras
 funcionando. 
 Imprima el arreglo nuevamente con la función implementada en el punto 3.
*/

void ordenar (laboratorio f []){ //ej8
	cout << "Computadoras funcionando de menor a mayor" << endl;
	int i, j;
	laboratorio temp;
	for(j=0; j<5; j++){
		for (i=0; i<5; i++)
		if (f[i].funcionalidad[0] > f[i+1].funcionalidad[0])
		{
			temp = f[i];
			f[i] = f[i+1];
			f[i+1] = temp;
		}		
	}
}

void ej9 (laboratorio g){ //ej9
	cout << "Imprime una ubicacion de laboratorio" << endl;
	cout << g.ubicacion << endl;
}


/*Implemente una función que devuelva el laboratorio con el mayor número de computadoras funcionando 
e imprima su ubicación con la función del punto anterior */

laboratorio devolucion (laboratorio h[]){
	cout << "Mayor computadoras funcionando" <<endl;
	return h[4];
}


main (){
	typedef laboratorio lab;
	lab x[5] = {"N101", 24, 15, 0, "N102", 16, 14, 0, "M108", 22, 16, 0, "L201", 14, 11, 0, "L104", 21, 17, 0};
	no_fun (x);
	imprimir (x);
	imprimir_3_nofunc (x);
	cout << total_nofunc (x) << "\n" << endl;
	lab_disponible (x);
	ordenar (x);
	imprimir (x);
	ej9 (devolucion(x));	
}

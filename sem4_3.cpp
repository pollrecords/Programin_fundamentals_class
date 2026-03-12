#include <iostream>
using namespace std; 
#include <string.h>

struct libro{
	char titulo [50];
	float precio;
}b;

void asignar (libro a[]){
	cout << endl << "Lista de libros\n" << endl;
	int i;
	for (i=0; i<5; i++){
		cout << "Titulo del libro: " << endl;
		cin >> a[i].titulo; //aciurda de incluir el index para que pueda pasar por el
		cout << "Precio del libro: " << endl;
		cin >> a[i].precio; //acierda de incluir el index para que pueda pasar por el
	}	
}

void imprimir (libro b[]){
	int i;
	for (i=0; i<5; i++){
		cout << b[i].titulo <<  endl;
		cout << b[i].precio << endl;
	}	
}

void buscar (libro a[]){
	cout << "\nLista de libros con precio mayor a 200\n" <<endl;
	int i;
	for (i = 0; i<5; i++){
		if (a[i].precio>200)
		cout << a[i].titulo << endl;	
	}
}

libro tercerlibro(libro d[]){
	return d[2];
}


float sumar(libro e[]){
	int i;
	int sum = 0;
	for (i=0; i<5; i++){
		sum += e[i].precio;
	}
	return sum;
}

main (){	

	libro x[5], y[] = {"Mate", 30, "Progra", 15, "Espanol", 10, "CN", 150.2, "Etica", 78};

	asignar (x);
	imprimir (x);
	buscar(x);
	
	cout << "\n" << "3r libro" <<endl; 
	cout << tercerlibro(x).titulo<<endl;
	cout << tercerlibro(x).precio<< "\n" << endl;
	
	cout << "La suma de todos son: " << endl;
	cout << sumar (x) <<endl;

}

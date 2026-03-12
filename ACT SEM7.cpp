#include <iostream>
#include <string> 
using namespace std;

//pol uvence

struct empleado {
    char nombre [50]; 
    float sueldo;
    float isr;
};

void imprimir (empleado a[]){
	cout << "Datos de los empleados" << "\n" << endl;
	int i;
	for (i=0; i<5; i++)
	{
		cout << "Nombre  " << a[i].nombre<<endl;
		cout << "sueldo " << a[i].sueldo<<endl;
		cout << "ISR  " << a[i].isr<< "\n" << endl; 
	}
}

void isr30(empleado b[]){
	
	int i;
	for (i=0; i<5; i++){
		b[i].isr = b[i].sueldo*.3;
	}
}

float nomina (empleado c[]){
	float total = 0;
    int i;
    for(i = 0; i < 5; i++) {
        total = total + c[i].sueldo - c[i].isr;
    }
    return total;
}

void sueldoMayor10k(empleado d[]) {
    cout << "Empleados con sueldo mayor a $10,000 " << endl;
    int i;
    for(i = 0; i < 5; i++) {
        if(d[i].sueldo > 10000.00) {
            cout << d[i].nombre << " ($" << d[i].sueldo << ")" << endl;
        }
    }
}
// metodo burbuja lit toca estudiar esto :<
void ordenar(empleado e[]) {
    empleado temp;
    int i, j;
    for(j= 0; j < 4; j++) {
        for(i= 0; i < 4; i++) {
            if(e[i].sueldo > e[i+1].sueldo) {
                temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;
            }
        }
    }
}

empleado mayorSueldo(empleado f[]) {
    return f[4];
}

void sueldoNeto(empleado e[]) {
    cout << "Sueldos Netos \n" << endl;
    for(int i = 0; i < 5; i++) {
        float neto = e[i].sueldo - e[i].isr;
        cout << "Nombre: " << e[i].nombre <<endl;
    	cout << "Sueldo Bruto: " << e[i].sueldo <<endl;
    	cout << "Sueldo Neto: " << neto << "\n" <<endl;
    }
}

main(){
	
	cout << "Tamano de una variable empleado: "  << sizeof(empleado) << "bytes" << "\n" << endl;  
    empleado x[5]={"Luis", 30000, 0, "Carlos", 7800, 0, "Felipe", 1000, 0, "Paul", 10000, 0, "Juan", 5000, 0};
    imprimir(x);
    isr30(x);
    imprimir(x);
    cout << "Nomina total: " << nomina(x) << endl;
    sueldoMayor10k(x);
    cout << "Lista de menor a mayor" << endl;
    ordenar(x);
    imprimir(x);
    cout << "Empleado con mayour sueldo" << endl;
    cout << mayorSueldo(x).nombre <<endl;
    sueldoNeto(x);
    
    
}

#include <iostream>
#include "Bodega.h"
#include "Plato.h"
#include "Ingredientes.h"

using namespace std;

int main() {
	int opcion;
	string nombre = "";
	string tipo = "";
	int cant_aport = 0, duracion = 0;
	Ingredientes* ingre;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Agregar Ingrediente"<<endl;
		cout<<"2.- Agregar Platos"<<endl;
		cout<<"3.- Comprar"<<endl;
		cout<<"4.- Salir"<<endl;		
		cin>> opcion;
		switch (opcion) {

			case 1:
				cout<<"Ingrese un Ingrediente"<<endl;
				cin>> nombre;
				cout<<"Ingrese el Tipo(Lacteos, Vegetales, Frutas): "<<endl;				
				cin>> tipo;
				cout<<"Ingrese la cantidad de aporte: "<<endl;
				cin>> cant_aport;
				cout<<"Ingrese la Duracion: "<<endl;
				cin>> duracion;

				ingre = new Ingredientes(nombre, tipo, cant_aport, duracion);

				break;
			case 2:
				
				break;
			case 3:

				break;
			case 4:
				cout<<"Tenga Buen Dia"<<endl;				
				break;	
		}
	}while(opcion != 4);

	return 0;
}

/* */
#include <iostream>
#include "Vehiculo.h"
using namespace std;

void modificar(Personaje &p,int at, int def){
    Vehiculo* coches;
    int numeroVehiculos, indiceBarato;
    string marca, modelo;
    float precio;

    cout<<"Digite el numero de vehiculos: ";
    cin>>numeroVehiculos;

    coches = new Vehiculo[numeroVehiculos]; //arreglo de objetos

    for(int i=0; i<numeroVehiculos; i++){
        cout<<"\nDigite los datos del vehiculo "<<i+1<<": "<<endl;
        cin.ignore();
        cout<<"Digite la marca: ";
        getline(cin,marca);
        cout<<"Digite el modelo: ";
        getline(cin,modelo);
        cout<<"Digite el precio: ";
        cin>>precio;

        coches[i] = Vehiculo(marca, modelo, precio);
    }

    indiceBarato = Vehiculo::indiceMBarato(coches, numeroVehiculos);

    cout<<"\nEl vehiculo mas barato es: "<<endl;
    (coches+indiceBarato)->mostrarDatos();

    delete[] coches;
    return 0;
}

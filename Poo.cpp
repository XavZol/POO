// Arreglo de Objetos
#include <iostream>
#include "Perro.h"
using namespace std;

int main(int argc, char** argv){
    Perro perro1("Fido", "Doberman");

    perro1.mostrarDatos();
    perro1.jugar();

    Perro* perro2 = new Perro("Toby", "Pitbull");

    perro2->jugar(); //destruir un objeto de tipo dinamico
    delete perro2;

    perro2

    return 0;
}

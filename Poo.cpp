// Funciones Amigas (friend)
#include <iostream>
#include "Personaje.h"
using namespace std;

//funcion para modificar los valores de ataque y defensa de un objeto personaje
void modificar(Personaje &p,int at, int def){//pasandolo por referencia modificamos el valor por si mismo
    p.ataque = at;
    p.defensa = def;
}

int main(int argc, char** argv){
    Personaje* principal = new Personaje(100, 90);
    principal->mostrarDatos();

    modificar(*principal, 50, 80);//pasamos el objeto por referencia
    principal->mostrarDatos();

    return 0;
}

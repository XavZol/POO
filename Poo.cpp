// Sobrecarga de Funciones Miembro
#include <iostream>
#include "Persona.h"
using namespace std;

int main(int argc, char** argv){
    Persona* persona1 = new Persona("Javier",27);
    persona1->correr(); //Correr sin parametros

    Persona* persona2 = new Persona("123456");
    persona2->correr(5);//Sobrecarga de metodos constructores

    return 0;
}

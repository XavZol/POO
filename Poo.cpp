// Construir un programa que calcule el área y el perrímetro de un cuadrilátero dada la longitud de sus lados. Los valores 
// de la longitud deberán introducirse por línea de ordenes. Si es un cuadrado, sólo se proporcionara la longitud de uno de los lados
//al constructor.
#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

void modificar(Personaje &p,int at, int def){
    Cuadrilatero* c1;
    float lado1, lado2;

    cout<<"Digite el lado 1: ";
    cin>>lado1;
    cout<<"Digite el lado 2: ";
    cin>>lado2;

    if(lado1==lado2){ //cuadrado
        c1 = new Cuadrilatero(lado1);
    }
    else {
         //rectangulo
        c1 = new Cuadrilatero(lado1,lado2);
    }

    cout<<"El perimetro es: "<<c1->obtenerPerimetro()<<endl;
    cout<<"El area es: "<<c1->obtenerArea()<<endl;

    return 0;
}

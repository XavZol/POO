// Miembros static de una clase
#include <iostream>
#include "Estatico.h"
using namespace std;

int main(int argc, char** argv){
    Estatico* obj1 = new Estatico();
    Estatico* obj2 = new Estatico();
    Estatico* obj3 = new Estatico();

    cout<<obj1->getContador()<<endl;

    cout<<"La suma es: "<<Estatico::sumar(4,5);

    return 0;
}

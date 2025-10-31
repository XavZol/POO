/*Construir un programa que permita dirigir el movimiento de un objeto dentro de un tablero y actualice su posicion
dentro del mismo. Los movimientos posibles son ARRIBA, ABAJO, IZQUIERDA y DERECHA. Tras cada movimiento el programa
mostrara la nueva direccion elegida y las coordenadas de situacion del objeto dentro del tablero. */
#include <iostream>
#include "Tablero.h"
using namespace std;

void modificar(Personaje &p,int at, int def){
    Tablero* ob1;
    int x,y,opcion,n;

    cout<<"Digite la posicion inicial del objeto: "<<endl;
    cout<<"Posicion X: "; cin>>x;
    cout<<"Posicion Y: "; cin>>y;

    ob1 = new Tablero(x,y);

    do{
        cout<<"\n\t.:MENU:."<<endl;
        cout<<"1. Arriba"<<endl;
        cout<<"2. Abajo"<<endl;
        cout<<"3. Derecha"<<endl;
        cout<<"4. Izquierda"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;

        if(opcion >= 1 && opcion <= 4){

            cout<<"Digite la cantidad de espacios a moverse: ";
            cin>>n;
        }

        switch(opcion){
            case 1: ob1->moverArriba(n);
                    break;
            case 2: ob1->moverAbajo(n);
                    break;
            case 3: ob1->moverDerecha(n);
                    break;
            case 4: ob1->moverIzquierda(n);
                    break;
            case 5: break;
            default: cout<<"\nSe equivoco de opcion de menu"<<endl;
        }
        cout<<"\nPosicion actual (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl;
    }while(opcion != 5);

    return 0;
}

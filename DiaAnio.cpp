#include<iostream>
#include "DiaAnio.h"
using namespace std;
//Comprobamos la igualdada en las fechas 
bool DiaAnio::igual(DiaAnio& d){
    if(dia==d.dia && mes==d.mes){
        return true;
    }
    else{
        return false;
    }
}
void DiaAnio::visualizar(){
    cout<<"\nMostrando los datos: \n";
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
}
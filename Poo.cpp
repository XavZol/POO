/* Definir una clase DiaAnio con los atributos mes y dia, los métodos igual() visualizar(). El mes se registra como un valor entero
(1, Enero, 2, Febrero, etc.). El día del mes se  registra en otra variable entera día.
Escribir un programa que compruebe si una fecha es su cumpleaños.  */
#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main(int argc,char** argv){
    DiaAnio* hoy;
    DiaAnio* cumple;
    int d, m;

    cout<<"Introduzca la fecha de hoy, dia: ";
    cin>>d;
    cout<<"Introduzca el mes: ";
    cin>>m;
    hoy = new DiaAnio(d,m);

    cout<<"\nIntroduzca la fecha de su cumpleaños, dia: ";
    cin>>d;
    cout<<"Introduzca el mes: ";
    cin>>m;
    cumple = new DiaAnio(d, m);
//mostramos las fechas 
    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();

    if(hoy->igual(*cumple)){
        cout<<"\nFeliz cumpleaños!\n";
    }
    else{
        cout<<"\nNo es tu cumpleaños, ten un buen dia \n";
    }

system("pause");
return 0;
}
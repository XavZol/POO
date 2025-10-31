// Clases compuestas
#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(int argc, char** argv){
    Estudiante* estudiante1 = new Estudiante("34FG",15.4,56,"Calle albitrio #78");
    
    estudiante1->mostrarDatos();

    return 0;
}

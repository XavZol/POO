// Autorreferencia del objeto this
#include <iostream>
using namespace std;

class Perro{
    //atributos
    private:
         string nombre, raza;

    //metodos
    public:
        Perro(string nombre,string raza){ //Constructor
            nombre = nombre;
            raza = raza;
        }

        ~Perro(){ //destructor 

        }
        void mostrarDatos();
        void jugar();
};
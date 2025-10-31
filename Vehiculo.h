#include <iostream>
using namespace std;

class Vehiculo{
    private:
    sting marca, modelo;
    float precio;

    public:
        Vehiculo(string marca,string modelo,float precio){
            this->marca = marca;
            this->modelo =modelo;
            this->precio = precio;
        }

        Vehiculo(){ //constructor por Defecto

        }
        ~Vehiculo(){ //destructor
            
        }

        float getPrecio();
        void mostrarDatos();
        static int indiceMBarato(Vehiculo coches[], int n);
};
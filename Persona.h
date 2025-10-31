//Implementacion de la clase persona

#include<iostream>

using namespace std;
class Persona{
        //atributos
    private:
        string nombre;
        int edad;
        string dni;

        //metodos
    public:
        Persona(string _nombre,int _edad){//Constructor 1
            nombre = _nombre;
            edad = _edad;
        }
        Persona(string _dni){ //Constructor 2
            dni = _dni;
        }
        void correr(){ //Metodo 1
            cout<<"Soy "<<nombre<< "y, tengo"<<edad<<"años y estoy corriendo"<<endl;
        }
        void correr(int km){ //Metodo 2
            cout<<"He corrido "<<km<<"kilometros"<<endl;
        }
};
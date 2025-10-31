#include<iostream>
using namespace std;

class Cuadrilatero{
    //atributos
    private: 
       float lado1, lado2;

       //métodos
       public: 
       Cuadrilatero(float lado1,float lado2){
        this->lado1 = lado1;
        this->lado2 = lado2;
       }
       Cuadrilatero(float lado){ //constructor 2
        this->lado1 = this->lado2 = lado;
       }

       float obtenerPerimetro();
       float obtenerArea();
};
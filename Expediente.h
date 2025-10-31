#include<iostream>
using namespace std;

class Expediente{
    private:
       int nroExpediente;

    public:
       Expediente(int nroExpediente){ //constructor
        this->nroExpediente = nroExpediente;
       }
       Expediente(){

       }
       ~Expediente(){

       }
       int getnroExpediente(){
        return nroExpediente;
       }
};
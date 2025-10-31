// Destructor de objetos 

class Perro{
    //atributos
    private:
         string nombre, raza;

    //metodos
    public:
        Perro(string _nombre,string _raza){ //Constructor
            nombre = _nombre;
            raza = _raza;
        }

        ~Perro(){ //destructor 

        }
        void mostrarDatos();
        void jugar();
};
//declaracion de una clase

class Punto{
    //Atributos 
    private: //modificador de acceso
    int x,y;

    //metodos 
    public:
    Punto(int _x,int _y){ //Constructor 1
        x = _x;
        y = _y;
    }
    Punto(){ //Constructor 2
        x = y = 0;
    }

    void setX(int valorX); //Establecemos el valor de x
    void setY(int valorY); //Establecemos el valor de y
    int getX(); //Obtenemos el valor de x
    int getY(); //Obtenemos el valor de y
    };
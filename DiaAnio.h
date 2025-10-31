//Implementacion de la clase dia, año

class DiaAnio{
    //Atributos
    private:
        int dia,mes;

        //Métodos
    public: //metodo constructor tiene el mismo nombre de la clase 
        DiaAnio(int _dia,int _mes){
            dia = _dia;
            mes = _mes;
        }

    bool igual(DiaAnio& d);
    void visualizar();

};
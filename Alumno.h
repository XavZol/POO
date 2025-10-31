
class Alumno{
    //atributos
    private:
       float calMate, calProgra, promedio;

       //métodos
    public: 
       Alumno(float _calMate,float _calProgra) { //constructor por defecto
          calMate = _calMate;
          calProgra = _calProgra; 
       }
       Alumno(){
       }
       void pedirDatos();
       void mostrarNotas();
}
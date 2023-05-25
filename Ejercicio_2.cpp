#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Crea una clase "Persona" con atributos como el nombre, la edad y el salario. 
// Añade un miembro "protected" para la dirección de correo electrónico.
// Luego, crea dos clases derivadas, "Empleado" y "Cliente" que hereden de la clase "Persona" y que tengan acceso a la dirección de correo electrónico.
// 
class Persona 
{
    private: 
        string nombre;
        string edad;
        int salario;
    protected:
        string dirección_correo;
    public:

};
class Empleado : protected Persona
{
    
    public:
        void GET_CORRE()
        {
            cout<<"La dirección de correo es: "<<dirección_correo<<endl;
        }

};
class Cliente : protected Persona
{

    public:
        void GET_CORRE()
        {
            cout<<"La dirección de correo es: "<<dirección_correo<<endl;
        }

};

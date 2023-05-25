#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Crea una clase base "Móvil" con atributos como la marca, el modelo y el sistema operativo. 
// Añade un constructor y un destructor a la clase. Luego, crea dos clases derivadas, "Teléfono" y "Tablet" que
// hereden de la clase "Móvil" y que tengan constructores y destructores específicos para cada clase.
class Móvil 
{
    private: 
        string marca;
        string modelo;
        string sistema_operativo;
    protected:
    public:
        Móvil(string marca, string modelo, string sistema_operativo)
        {
            this->marca=marca;
            this->modelo=modelo;
            this->sistema_operativo=sistema_operativo;

        }
        ~Móvil()
        {
            cout<<"Clase Padre 'Móvil' destruido."<<endl;
        }

};
class Teléfono : protected Móvil
{
    public:
        Teléfono(string marca, string modelo, string sistema_operativo): Móvil( marca,  modelo,   sistema_operativo)
        {}
        ~Teléfono()
        {
            cout<<"Clase Hija 'Teléfono' destruido."<<endl;
        }

};
class Tablet : protected Móvil
{
    public:
        Tablet(string marca, string modelo, string sistema_operativo): Móvil( marca,  modelo,   sistema_operativo)
        {}
        ~Tablet()
        {
            cout<<"Clase Hija 'Tablet' destruido."<<endl;
        }
};

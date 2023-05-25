#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Crea una clase base "Vehículo" con atributos como la marca, modelo, año de fabricación y precio.
// Luego, crea dos clases derivadas, "Automóvil" y "Motocicleta" que hereden de la clase "Vehículo" y
// añadan atributos específicos como número de puertas y tipo de combustible en el caso del
// automóvil y cilindrada en el caso de la motocicleta
class Vehículo 
{
    protected:
        string marca;
        string modelo;
        int añofrabricacion;
        int precio;
    public:

};
class Automóvil : public Vehículo
{
    protected:
        int num_puertas;
        string tipo_combustible;
    public:

};
class Motocicleta : protected Vehículo
{
    protected:
        int num_puertas;
        string tipo_combustible;
        int cilindrada;
    public:

};

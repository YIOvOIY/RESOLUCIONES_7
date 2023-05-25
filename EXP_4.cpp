#include <iostream>
#include <string>
#include <vector>
using namespace std;
// g) Utilizar la herencia pública para heredar los atributos y métodos de la clase base en la clase derivada.
// h) Utilizar la herencia protegida para heredar los atributos protegidos de la clase base en la clase derivada.
// i) Utilizar la herencia privada para ocultar los atributos y métodos de la clase base en la clase derivada.
class Móvil 
{
    private:
        string sistema_operativo;
    protected:
        string código;
    public:
        string marca;
        string modelo;
        Móvil(string marca, string modelo, string sistema_operativo, string código)
        {
            this->marca=marca;
            this->modelo=modelo;
            this->sistema_operativo=sistema_operativo;
            this->código=código;
        }
        void imprimir ()
        {
            cout<<"Marca: "<<marca<<endl;
            cout<<"Modelo: "<<modelo<<endl;
            cout<<"Sistema operativo: "<<sistema_operativo<<endl;   
        }
        string getsistema_operativo() const { return sistema_operativo; }

};
class MP3 : public Móvil
{
    public:
        MP3(string marca, string modelo, string sistema_operativo, string código): Móvil( marca,  modelo,   sistema_operativo, código)
        {}
};
class Teléfono : protected Móvil
{
    public:
        Teléfono(string marca, string modelo, string sistema_operativo, string código): Móvil( marca,  modelo,   sistema_operativo, código)
        {}
        void Imprimir_protected()
        {
            cout<<"CODIGO: "<<código<<endl;
        }

};
class Tablet : private Móvil
{
    public:
        Tablet(string marca, string modelo, string sistema_operativo, string código): Móvil( marca,  modelo,   sistema_operativo, código)
        {}
        void Imprimir_private() const
        {
            cout<<"SISTEMA OPERATIVO: "<< getsistema_operativo()<<endl;
        }
};
int main()
{
    cout<<"\n________________"<<endl;
    MP3 MP31("ABC","A","LINUX","awfub212");
    MP31.imprimir();
    cout<<"\n________________"<<endl;
    Teléfono TELEFONO1("PERITA","B","VENTANA","sojdbou31134");
    TELEFONO1.Imprimir_protected();
    cout<<"\n________________"<<endl;
    Tablet TABLET1("MANZANA","C","PINGUINO","osjbn039814u38gh");
    TABLET1.Imprimir_private();
    cout<<"\n________________"<<endl;
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Cliente 
{
    private:
    
    protected:
        string nombre;
        string clave;
        string nombreclave;
        int monto;
    public:
        Cliente (string nombre, string clave,  int monto)
        {
            this-> nombre=nombre;
            this-> clave=clave;
            this-> monto=monto;
        }
        void GET_NOMBRECLAVE()
        {
            cout<<"Nombre clave es: "<<nombreclave;
        }
        void GET_CLAVE()
        {
            cout<<"Clave es: "<<clave;
        }
        void GET_Monto()
        {
            cout<<"Clave monto: "<<monto<<endl;
        }
        ~Cliente()
        {
            cout<<"\nClase Cliente destruido"<<endl;
        }
        
        
};
class ClienteSeguro : public Cliente
{
    protected:
        vector<int> claven = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
        vector<char> clavep = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M','O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        vector<string> clientes ={"Diego","Macedo","Barriga"};
        vector<int> contraseña ={17346387,12746,31974};
    public:
        ClienteSeguro(string nombre, string clave,  int monto): Cliente ( nombre,  clave,   monto)
        {}

        void Encriptarnombre()
        {
            for (int i=0; i<clavep.size(); i++)
            {
                for(int i2=0; i2<nombre.size();i2++)
                {
                    if (nombre[i2] == clavep[i])
                    {
                        nombreclave.append(1,clavep[i+6]);
                    }
                }
            }
        }
        ~ClienteSeguro()
        {
            cout<<"\nClase ClienteSeguro destruido"<<endl;
        }
};

int main()
{
    ClienteSeguro cliente1("ABC","A",123);
    cliente1.Encriptarnombre();
    cliente1.GET_NOMBRECLAVE();

}

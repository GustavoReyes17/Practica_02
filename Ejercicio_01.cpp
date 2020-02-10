#include<iostream>
using namespace std;
class Gato
{
private:
    int suEdad;
public:
    Gato(int edadInicial);
    ~Gato();
    int ObtenerEdad();
    void AsignarEdad(int edad);
    void Maullar();
};

Gato::Gato(int edadInicial)
{
    suEdad=edadInicial;
    cout<<"Se ha creado un objeto Gato de Edad"<<edadInicial<<endl;
}
Gato::~Gato()
{
    cout<<"El objeto Gato se destruira en 3,2,1 ..... ya fue"<<endl;
}
int Gato::ObtenerEdad()
{
    return suEdad;
}
void Gato::AsignarEdad(int edad)
{
    suEdad=edad;
}
void Gato::Maullar()
{
    cout<<"Miauuuuuuu"<<endl;
}
int main(void)
{
    Gato Pelusa(5);
    Pelusa.Maullar();
    cout<<"Pelusa es un gato que tiene "<<Pelusa.ObtenerEdad()<<" anios de edad"<<endl;
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);
    cout<<"Ahora Pelusa tiene "<<Pelusa.ObtenerEdad()<<" anios de edad"<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Gato
{
private:
    int suEdad;
    int suPeso;
public:
    Gato(int edadInicial,int pesoInicial);
    ~Gato();
    int ObtenerEdad();
    int ObtenerPeso();
    void AsignarEdad(int edad);
    void AsignarPeso(int peso);
    void Maullar();
};

Gato::Gato(int edadInicial,int pesoInicial )
{
    suEdad=edadInicial;
    cout<<"Se ha creado un objeto Gato de edad "<<edadInicial<<endl;
    suPeso=pesoInicial;
    cout<<"Con un peso de "<<pesoInicial<<" kilogramos"<<endl;
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
int Gato::ObtenerPeso()
{
    return suPeso;
}
void Gato::AsignarPeso(int peso)
{
    suPeso=peso;
}
void Gato::Maullar()
{
    cout<<"Miauuuuuuu"<<endl;
}
int main(void)
{
    Gato Pelusa(5,8);
    Pelusa.Maullar();
    cout<<"Pelusa es un gato que tiene "<<Pelusa.ObtenerEdad()<<" anios de edad"<<endl;
    cout<<"Y que pesa "<<Pelusa.ObtenerPeso()<<" kilogramos"<<endl;
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);
    Pelusa.AsignarPeso(10);
    cout<<"Ahora Pelusa tiene "<<Pelusa.ObtenerEdad()<<" anios de edad"<<endl;
    cout<<"Y que pesa "<<Pelusa.ObtenerPeso()<<" kilogramos"<<endl;
    return 0;
}

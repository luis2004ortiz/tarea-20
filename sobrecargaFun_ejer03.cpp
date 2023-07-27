//Ejercicios con sobre carga de funciones
#include<iostream>

using namespace std;

int suma(int a, int b)
{
    return a+b;
}

double suma(double a, double b)
{
    return a+b;
}

string saludos()
{
    return "Bienvenidos a la PUCE Esmeraldas";
}

string saludos(string nombre, int edad)
{
    if(edad >=18)
       return "hola"+nombre+"Bienvenidos a la Puce esmeraldas";
}

string saludos(string nombre, int edad)
{
    if(edad >=18)
       return "hola"+nombre+"Bienvenidos a la Puce esmeraldas";
    else
       return "hola"+nombre+"Bienvenidos a la Puce esmeraldas";
}

{
    return "Bienvenidos a la PUCE Esmeraldas";
}

int main()
{
    cout<<endl<<"la suma de 10 +23 es "<<suma(10,23);
    cout<<endl<<"la suma de 15.67 + 4.88 es "<<suma(15.67,4.88);

    cout<<endl<<saludos();
    cout<<endl<<saludos("jermy");
    cout<<endl<<saludos("luis");
    cout<<endl<<saludos("romina");
    cout<<endl<<saludos("marin");

    return 0;
}
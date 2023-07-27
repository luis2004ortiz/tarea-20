//diseñe la funcion que transforme un entero a binario

#include<iostream>

using namespace std;

string decimalbinario(int num)
{
    int residuo=0;
    string aux="";
    while (num=0)
    {
        residuo = % 2;
        aux=aux + to_string(residuo) + aux;
        num = num / 2;
       /* cout<<endl<<residuo:*/
    }
}

int main()
{
    cout<<endl<<"conversion de decimal a binario"<<endl<<"====================================";
    cout<<endl<<"25 en binario es "<<decimalBinario(25);
    cout<<endl<<"255 en binario es "<<decimalBinario(255);

    return 0;
}




/*Diseñe la funcion que resuelva la siguiente serie
x-xˆ3/3! */

#include<iostream>

using namespace std;

double factorial(int num)
{
  double fac=1;
  if(num==0)
   return 1;

  for(int k=1; k<=num; k++)
   fac=fac*k;

  return fac;
}

double potencia(double base, int exp)
{
  double res=1;
  for(int k=1; k<=exp; k++)
   res= res*base;
  return res;
}

double serieFactorial(double x)
{
  double suma=0;
  bool signo=true;
  for(int k=1; k<=7; k+=2)
  {
    if(signo)
     suma=suma + potencia(x, k)/factorial(k);
    else
     suma=suma - potencia(x, k)/factorial(k);
    signo=!signo;
  }
  return suma;
}
main()
{
  double x=7;
  cout<<endl<<"Cuando x vale "<<x<<", el resultado de la serie es "<<serieFactorial(x);
  return 0;
}
#include <iostream>
using namespace std;

double promedio(int *array, int n)
{//-------------------------------
  double suma=0;
  for(int i=0; i<n; i++)
    suma  = suma + array[i];
  return suma/n;
}

double promedio(float *array, int n)
{//---------------------------------
  double suma=0;
  for(int i=0; i<n; i++)
    suma  = suma + array[i];
  return suma/n;
}

double promedio(double *array, int n)
{//----------------------------------
  double suma=0;
  for(int i=0; i<n; i++)
    suma  = suma + array[i];
  return suma/n;
}

//--- Ahora usamos un template! ----------------------

template <typename TipodeDato, typename TipodeRetorno>
TipodeRetorno promedio(TipodeDato *array, int n)
{
  TipodeRetorno suma =0;
  for(int i=0; i<n; i++)
    suma  = suma + array[i];
  return suma/n;
}


int main()
{
  int array[7]={10,20,30,40,50,60,70};

  double prom = promedio<int,double>(array,7);
  cout << "Promedio de array de enteros : " << prom << "\n\n";

  float array2[5]={ 12.5, 14.5, 18.5, 14.78, 5.6};
  double prom2 = promedio<float, double>(array2,5);
  cout << "Promedio de array de floats : " << prom2 << "\n\n";

  //--- ahora crea tu un array de datos de double
  //-- ...

  return 0;
}

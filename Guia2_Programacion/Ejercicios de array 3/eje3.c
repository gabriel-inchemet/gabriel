/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
  en orden ascendente. 
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,cont,z,i,tabla[100];
           
     i=0;
     for (x=1;x<=100;x++)
  {
cont=0;
    for (z=1;z<=x;z++)
      {
  if (x%z==0)
 {
   cont++;
  }
  }    
 if (cont==2 || z==1 || z==0)
        {
  tabla[i]=x;
         i++;
 }    
    }
    for (x=0;x<i;x++)
  {
        printf("%d\n",tabla[x]);
    }       
    system("PAUSE");     
    return 0;
}
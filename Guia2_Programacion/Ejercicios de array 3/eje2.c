/*Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
en orden descendente.
Creador:INCHEMET Gabriel Hernan
Modifico:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int x,tabla[100];
           
           for (x=1;x<=100;x++)
  {
     tabla[x]=x;
    }
          for (x=100;x>=1;x--)
 {
 printf("%d\n",tabla[x]);
    }
       system("PAUSE");     
    return 0;
}


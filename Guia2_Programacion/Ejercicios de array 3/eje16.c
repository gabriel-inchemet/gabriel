/*Que muestre los primeros 100 números de izquierda a derecha usando un array de dos 
dimensiones.
Creador:INCHEMET Gabriel Hernan
Modifico:
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y, numeros[10][10];
   
    for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
      numeros[x][y]=(x*10)+1+y;
        }
       
    }
   
    for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
     printf("%d ",numeros[x][y]);
        }
        printf("\n");
    }
   
    system("PAUSE");     
    return 0;

}
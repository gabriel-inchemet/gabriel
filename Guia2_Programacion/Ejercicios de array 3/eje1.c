/*Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
en orden ascendente.
Creador:INCHEMET Gabriel Hernan
Modifico:
*/

#include <stdio.h>
#define numerosmaximo 100

int main()
{

    int numeros[numerosmaximo];

    for (int i = 0; i <= numerosmaximo; i++)
    {
   printf("ingrese un numero");
  scanf("%d", &numeros[i]);
    }
    for (int i = 1; i <= numerosmaximo; i++)
        for (i = 1; i < numerosmaximo; i++)
        {
 if (numeros[i] < numeros[i + 1])
     {
       int min = numeros[i];
       numeros[i] = numeros[i + 1];

      numeros[i + 1] = min;
  }
 }
for (int i = 1; i < numerosmaximo; i++)
{
    printf("%d", numeros[i]);
}
}

/*Que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar 
los 10 números en pantalla mediante un solo array
Creador:INCHEMET Gabriel Hernan
Modifico:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, numeros1[5],numeros2[5],numeros3[10];
  int i,j;

  for (i=0;i<5;i++){
     printf("Escriba un número");
    scanf("%d",&numeros1[i]);
 } 
  for (i=0;i<5;i++){
     printf("Escriba un número");
     scanf("%d",&numeros2[i]);
      }
  for(i=0;i<5;i++)
  {
   numeros3[i]=numeros1[i];
  }
  for(i=0;i<5;i++)
  {
   numeros3[5+i]=numeros2[i];
  }
  for (i=0;i<10;i++){
    printf("%d\n",numeros3[i]);
  }  
  system("PAUSE");     
  return 0;
}
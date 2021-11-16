/*Ingresar dos valores numéricos que corresponden a un horario expresados horas y 
minutos, convertirlo a minutos. Mostrar el resultado.
Creador:INCHEMET Gabriel Hernan
Modifico:
*/

#include<stdio.h>
#include<math.h>
int main() {
    float horas, minutos, segundos;
    
    printf("04. MUESTRA LAS HORAS Y MINUTOS EN UN TOTAL DE SEGUNDOS.\n\n");    
    printf("Ingrese Cantidad en Segundos : ");
    scanf("%f",&segundos);
    horas = (segundos/3600);
    minutos = (segundos/60);
    printf("Horas : %.0f\n",horas);
    printf("Minutos : %.0f\n",minutos);
    
    return 0;
}
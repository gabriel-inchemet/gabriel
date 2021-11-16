/*Realizar un programa que lea los lados a,b,c de un triangulo y Realizar una función que 
informe si conforman triangulo.
creador:INCHEMET Gabriel Hernan
Modificado:
*/

#include<stdio.h>
    int triangulo (int lado1,int lado2,int lado3);
    int main(){
    int a, b, c;
    
    printf("ingrese valor de lado1");
    scanf ("%d",&a);
    printf("ingrese valor de lado2");
    scanf("%d",&b);
    printf("ingrese valor de lado3");
    scanf("%d",&c);
    triangulo(a,b,c);
 }
int triangulo (int lado1,int lado2,int lado3){

     if (((lado1+lado2)>lado3)&&((lado1+lado3)>lado2)&&((lado2+lado3)>lado1))   //a+b>c   a+c>b   b+c>a  formula
 {
     printf ("es triangulo");
 }else{
    printf("no es triangulo");
 }
 
 }
    

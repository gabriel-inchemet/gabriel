/*Ingresar tres números, informar su suma y producto
creador:inchemet gabriel hernan
modificado:
*/

#include <stdio.h>

main ()
{
    int num1;
    int num2;
    int num3;
    //infomo la suma de 3 numeros.//
printf("ingrese un numero:");
scanf("%d",&num1);
printf("ingrese un numero:");
scanf("%d",&num2);
printf("ingrese un numero:");
scanf("%d",&num3);

printf("la suma de los numeros es:");
printf("%d",num1 + num2 + num3);

//informo el producto de 3 numeros://
{
printf("\ningrese un numero:");
scanf("%d",&num1);
printf("ingrese un numero:");
scanf("%d",&num2);
printf("ingrese un numero:");
scanf("%d",&num3);

printf("el producto de los numeros es:");
printf("%d",num1 * num2 * num3);
}

return 0;
}

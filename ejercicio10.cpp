#include <stdio.h>
#include<math.h>
int main()
{
    int b,c,h,d,op;
   printf("1._Calcular area de un rectangulo \n2._Calcular area de un triangulo \n3._Calcular area de un trapecio");
    printf("\n\nElija una opcion: ");
    scanf("%d",&op);
    
    switch(op)
{
case 1:
printf("inserte base: ");
scanf("%d",&b);
printf("inserte altura: ");
scanf("%d",&h);
d=h*b;
printf("Área rectangulo: %d",d);
break;

case 2:
printf("inserte base: ");
scanf("%d",&b);
printf("inserte altura: ");
scanf("%d",&h);
d=(h*b)/2;
printf("Área rectangulo: %d",d);
break;

case 3:
printf("inserte base 1: ");
scanf("%d",&b);
printf("inserte base 1: ");
scanf("%d",&c);
printf("inserte altura: ");
scanf("%d",&h);
d=((b+c)/2)*h;
printf("Área rectangulo: %d",d);
break;

default:
printf("Opcion incorrecta");

}
    
   
    
}
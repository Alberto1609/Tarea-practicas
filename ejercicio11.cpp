#include <stdio.h>
#include <math.h>

int main()
{
float y1,y2,x1,x2;
float m;

printf("Calcular pendiente");
printf("\nIngrese P1(y2,y1)");
printf("\ny2= ");
scanf("%f",&y2);
printf("\ny1= ");   
scanf("%f",&y1);

printf("\nIngrese P2(x2,x1)");
printf("\nx2= ");  
scanf("%f",&x2);
printf("\nx1= ");   
scanf("%f",&x1);

if(y2-y1==0)
{
printf("\nLa pendiente es vertical");
}
else if(x2-x1==0)
{
printf("\nPendiente ideterminada");
}
else
{
m=(y2-y1)/(x2-x1);
printf("\nLa pendiente es: %f",m);
}
}
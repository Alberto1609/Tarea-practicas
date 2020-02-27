#include<stdio.h>

int main()
{
int a,b;
    printf("Programa que calcula cual numero es mayor");
   
     printf("\nIngrese el primer numero: ");
     scanf("%d",&a);
    
    printf("\nIngrese el segundo numero: ");
    scanf("%d",&b);
    
    if(a>b)
    {
    printf("\na es mayor a b");
    }
    
   else if (b>a)
    {
    printf("\nb es mayor que a");
    }

    else
    {
        printf("\nLos numeros son iguales");
    }
}    

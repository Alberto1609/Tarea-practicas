#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    printf("Ingrese un numero: ");
    scanf("%d",&x);
    
    if(x<=0)
    {
        y=x+3;
    }
    else
    {
        y=(pow(x,2)+(2*x));
    }
    printf("\nEl resultado es: %d",y);
    
}
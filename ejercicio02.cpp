# include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Ingrese un valor a: ");
    scanf("%d",&a);
    
    printf("Ingrese un valor b: ");
    scanf("%d",&b);
    c=a/b;
    
    if(c!=((a-1)/b))
    {
        
        printf("\nA es divisible entre b. %d",c);
     }    
    
   else
    {
        printf("\nA no es divisible entre b");
    }
}
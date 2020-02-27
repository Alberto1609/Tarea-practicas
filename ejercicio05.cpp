# include<stdio.h>
# include<math.h>

int main()
{
    int a,b=75;
    float d,c=0.6,e=0.55;
    
    printf("Entrada normal: $75 \nNiños hasta 12 años: 60 porciento de descuento \nAdultos mayores de 60 años: 55 porciento de descuento");
    
    printf("\n\nIndique su edad: ");
    scanf("%d",&a);
    
    if(a>60)
    {
        d=b*e;
       printf("\nEntrada Aldulto 60 años:$ %f",d);
    }
    else if(a<=12)
    {
        d=b*c;
        printf("\nEntrada niño:$ %f",d);
    }
    else
    {
        printf("\nEntrada normal:$ %d",b);
    }
}
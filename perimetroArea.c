#include <stdio.h> 
int main(){

float a,b, c, diferente, perimetro, area; 

scanf("%f %f %f", &a, &b, &c);
diferente = a- b;
if (diferente >= c )
{
   area = (a + b) * c / 2 ;
    printf("Area = %.1f", area);
}
else 
{
    perimetro = a + b + c;

    printf("Perimetro = %.1f",perimetro);
}



    return 0;
}
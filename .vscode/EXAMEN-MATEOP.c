#include <stdio.h>
#include <math.h>

int main()
{
   int monto,i,t;
  printf("Ingresar el monto: \n");
  scanf("%d",&monto);

   printf("Ingresar el tasa de interes: \n");
  scanf("%d",&i);
  
   printf("Ingresar el periodo anual: \n");
  scanf("%d",&t);
  
  p1= monto*i*t;
  
   printf("El interes total a pagar es de %f ",p1);
  

    return 0;
}
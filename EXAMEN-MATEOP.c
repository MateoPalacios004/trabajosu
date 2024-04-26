#include <stdio.h>
#include <math.h>

float main()
{
   float monto,i,t,x,p1;
  
  printf("Ingresar el monto: \n");
  scanf("%f",&monto);
  
   printf("Ingresar el tasa de interes: \n");
  scanf("%f",&i);
  
   printf("Ingresar el periodo anual: \n");
  scanf("%f",&t);

  p1= monto*i*t;
  
   printf("El interes total a pagar es de %f ",p1);
  
  
  
 
    return 0;
}

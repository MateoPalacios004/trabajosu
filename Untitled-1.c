#include <stdio.h>


float main()
{
    
float m1, ms1, m2, ms2, m3, ms3, p, kw, d, d1, d2,vt1;
p=0.1;

printf ("Ingresar los kw/h consumidos durante el primer mes:  \n ");
scanf ("%f",&m1);

ms1=m1*p;

printf ("Ingresar los kw/h consumidos durante el segundo  mes:  \n ");
scanf ("%f",&m2);

ms2=(m2*p)-m1;

printf ("Ingresar los kw/h consumidos durante el tercer  mes:  \n ");
scanf ("%f",&m3);

ms3=(m3*p)-ms2;
 
 vt1= ms3;
 
 if (vt1<20)
 {
     d= vt1*0.1;
     d1= vt1-d;
     printf ("Recibe un descuento del diez porciento,valor a final es de: %f  \n ", d1);
 }
 else 
 {
     if (vt1>=20 || vt1<=30)
     {
         d=vt1*0.005;
         d2= vt1-d;
         printf ("Recibe un descuento del treinta porciento,valor a final es de: %f  \n ", d2);
     }
 }
printf ("El consumo del primer mes en kw/h es de: %f  \n ", m1);
printf ("El consumo del segundo mes en kw/h es de: %f  \n ", m2);
printf ("El consumo del tercer mes es de kw/h: %f  \n ", m3);
printf ("El valor a pagar de los 3 meses es de : %f  \n ", vt1);
    return 0;
}



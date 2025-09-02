#include <stdio.h>
int main()
{
   float const Pi=3.14;
   float v;
   float r;
   printf("saisir le rayon du sphere :");
   scanf("%f",&r);
   v=4.0f/3.0f*Pi*r*r*r; //dans v=4/3*Pi*r*r*r : 4/3=1 car les deux valeur 4 et 3 ce sont dest int
   printf("le volum d'une sphere est %.2f mL",v); 

    return 0;
}
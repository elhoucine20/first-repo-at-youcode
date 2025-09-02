#include <stdio.h>

int main()
{
int x,P;
printf("saisir la valeur de x :");
scanf("%d",&x);

P=((((3*x+2)*x-5)*x-1)*x+7)*x -6; // la methode d'Horner
printf("la valesur du polynome est %d \n",P);
    
return 0;
}
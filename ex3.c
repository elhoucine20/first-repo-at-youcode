#include <stdio.h>
int main()
{
   
  float montant,taxe;  
  printf("saisir le montant :");
  scanf("%f",&montant);
  printf("le montant est %.2f DH\n",montant);
  taxe=(montant/100)*5;
  montant=montant+taxe;
  printf("le montant apres l'ajout de taxe est %.2f DH",montant);

    return 0;
}
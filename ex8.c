#include <stdio.h>
int main()
{
float montant_pret,taux_dinteret,paiment_monsuel,sold;
    printf("saisir le montant du pret :");
    scanf("%f",&montant_pret);

    printf("saisir le taux d'interet  :");
    scanf("%f",&taux_dinteret);

    printf("saisir le paiment monsuel :");
    scanf("%f",&paiment_monsuel);

    taux_dinteret=(taux_dinteret/100)/12;

    for(int i=1;i<=3;i++){
    sold=(montant_pret - paiment_monsuel) + (montant_pret*taux_dinteret);
    montant_pret=sold;
    printf("sold restant en %d paiment est : %.2f \n",i,sold);
    }
    
return 0;
}
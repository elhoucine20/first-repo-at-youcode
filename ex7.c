#include <stdio.h>

int main(){
int billet_20,billet_10,billet_5,billet_1,rest,montant;
printf("saisir le montant :");
scanf("%d",&montant);
billet_20 = montant / 20;
rest = montant % 20;
billet_10=rest/10;
rest=rest%10;
billet_5=rest/5;
rest=rest%5;
billet_1=rest;

printf("billet de 20 $ est %d \n",billet_20);
printf("billet de 10 $ est %d \n",billet_10);
printf("billet de 5 $ est %d \n",billet_5);
printf("billet de 1 $ est %d \n",billet_1);

    return 0;
}
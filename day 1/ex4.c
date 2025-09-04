#include <stdio.h>

int main(){
char A,B,C,D,F;
int x;
printf("saisir la valeur de x : ");
scanf("%d",&x);
x=x/10;
if(x>10 || x<0){
printf("erreur!!");
}
else
{
    switch(x){
 case 10:
 case 9:
    printf("A");
    break;
 case 8: printf("B");
    break;
 case 7: printf("C");
    break;
 case 6: printf("D");
    break;
 default: printf("F");
    break;
}
}
    return 0;
}
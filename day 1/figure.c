#include <stdio.h>

int main(){
int n,i,k,j;
printf("saisir la valeur de n : ");
scanf("%d",&n);
 
for(i=0;i<n;i++){

for(j=n,k=0;j>0;j--,k++){
    if(j == i+1 || k == i)
    printf("*");
    else
    printf(" ");
}
printf("\n");
}
    return 0;
}
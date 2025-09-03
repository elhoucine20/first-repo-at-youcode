#include <stdio.h>

int main()
{
    int GS1, Ide_groupe, Code_editeur, N_darticle, chiffre_controle;

    do
    {
        printf("saisir ISBN :");
        scanf("%d - %d - %d - %d - %d", &GS1, &Ide_groupe, &Code_editeur, &N_darticle, &chiffre_controle);
        
    } while (GS1 != 978 && GS1 != 979);

    printf("prifixe GS1 : %d \n", GS1);
    printf("identifiant de groupe : %d \n", Ide_groupe);
    printf("code de liditeur : %d \n", Code_editeur);
    printf("Numero darticle : %d \n", N_darticle);
    printf("chiffre de controle : %d \n", chiffre_controle);

    return 0;
}
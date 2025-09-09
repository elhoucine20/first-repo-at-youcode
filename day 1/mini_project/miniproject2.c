#include <stdio.h>

typedef struct
{
    char CNE[20];
    char Nom[40];
    char Prenom[40];
    float Notes[4];
    float Moyenne;

} Etudien;
Etudien etudient[30];
int count = 0;

void ajouterEtudiant()
{
    getchar();
    printf("saisir le CNE de l'etudient: ");
    scanf("%[^\n]", etudient[count].CNE);
    getchar();
    printf("sasir le nom de l'etudien : ");
    scanf("%[^\n]", etudient[count].Nom);
    getchar();
    printf("sasir le prenom de l'etudien : ");
    scanf("%[^\n]", etudient[count].Prenom);
    getchar();
    count++;
}

void afficherEtudiants()
{
    for (int i = 0; i < count; i++)
    {
        printf("L'etudiant numero %d\n", i + 1);
        printf("le CNE : %s\n", etudient[i].CNE);
        printf("le nom : %s\n", etudient[i].Nom);
        printf("le prenom : %s\n", etudient[i].Prenom);
    }
    printf("\n");
}

void saisirNotes()
{
    int indice;
    printf("saisir l'indice de l'etudient : ");
    scanf("%d", &indice);
    if (indice < 0 || indice > count)
    {
        printf("indice est non disponible!!");
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            printf("Note %d est : ", i + 1);
            scanf("%f", &etudient[indice].Notes[i]);
        }
    }
}

float calculerMoyenneEtudiant()
{
    int indix;
    printf("saisir l'indice de letudient : ");
    scanf("%d", &indix);

    if (indix < 0 || indix > count)
        printf("indix n'est pas disponible!!");

    float somme = 0;
    for (int i = 0; i < 4; i++)
    {
        somme = somme + etudient[indix].Notes[i];
    }
    //float moyenne = somme / 4;
    etudient[indix].Moyenne=somme/4;
    printf("la moyenne de %s est %.2f \n", etudient[indix].Nom, etudient[indix].Moyenne );
}
float calculerMoyenneGenerale()
{
    float S = 0;
    for (int i = 0; i < count; i++)
    {
        S = S + etudient[i].Moyenne;
    }
    float MOYENNE = S / count;
    printf("la moyenne generale est %.2f \n", MOYENNE);
}

float afficherBulletin()
{
    int indexx;
    printf("saisir l'indixx de letudient : ");
    scanf("%d", &indexx);

    for (int i = 0; i < 4; i++)
    {
        printf("Note %d : %.2f ",i+1,etudient[indexx].Notes[i]);
    }
        printf("la moyenne de %d est %.2f \n",indexx,etudient[indexx].Moyenne);

}

int main()
{
    int chose;
    do
    {
        printf("----MENU----\n");
        printf("1) Ajouter un etudiant\n");
        printf("2) afficher les  etudiants\n");
        printf("3) saisir les notes des etudiants\n");
        printf("4) Calculer la moyenne des etudiants\n");
        printf("5) Calculer la moyenne generale des etudients\n");
        printf("6) afficher le bulletin \n");
        printf("0) Quitter\n");

        printf("saisir le chose: ");
        scanf("%d", &chose);

        switch (chose)
        {
        case 1:
            ajouterEtudiant();
            printf("\n");
            break;
        case 2:
            afficherEtudiants();
            printf("\n");
            break;
        case 3: saisirNotes();
            printf("\n");
            break;
        case 4:
            calculerMoyenneEtudiant();
            printf("\n");
            break;
        case 5:
            calculerMoyenneGenerale();
            printf("\n");
            break;
         case 6: afficherBulletin();
             printf("\n");
             break;

        default:
            printf("cette chose invalid !!");
            break;
        }
    } while (chose != 0);

    return 0;
}
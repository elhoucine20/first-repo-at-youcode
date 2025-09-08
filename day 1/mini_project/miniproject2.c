#include <stdio.h>

typedef struct 
{
    char CNE[20];
    char Nom[40];
    char Prenom[4];
    float Notes[4];
    float Moyenne;

}Etudien;
int indice;
Etudien etudient[30];
int count = 0;

void ajouterEtudiant()
{
    printf("saisir le CNE de l'etudient: ");
    scanf("%s", etudient[count].CNE);
    printf("sasir le nom de l'etudien : ");
    scanf("%s", etudient[count].Nom);
    printf("sasir le prenom de l'etudien : ");
    scanf("%s", etudient[count].Prenom);
    count++;
}

void afficherEtudiants(){
    for (int i = 0; i < count; i++)
    {
        printf("L'etudiant numero %d\n",i+1);
        printf("le CNE : %s\n",etudient[i].CNE);
        printf("le nom : %s\n",etudient[i].Nom);
        printf("le prenom : %s\n",etudient[i].Prenom);
    }
   printf("\n");
}

void saisirNotes(){
    printf("saisir l'indice de l'etudient");
    scanf("%d",&indice);
    if(indice < 0 || indice >count)
    printf("indice est non disponible!!");
    for(int i=0;i<4;i++){
    printf("Note %d est : ",i);
    scanf("%f",&etudient[indice].Notes[i]);
}

}

float calculerMoyenneEtudiant(){

    
}


int main()
{
    int chose;
  do{
    printf("----MENU----\n");
    printf("1) Ajouter un etudiant\n");
    printf("2) Saisir les notes d'un etudiant\n");
    printf("3) Afficher tous les etudiants\n");
    printf("4) Afficher bulletin d'un etudiant\n");
    printf("5) Calculer la moyenne generale\n");
    printf("0) Quitter\n");

    printf("saisir le chose: ");
    scanf("%d",&chose);

    switch(chose){
        case 1: ajouterEtudiant(); 
        printf("\n");
             break;
        case 2: afficherEtudiants();
         printf("\n");
             break;
        case 3: saisirNotes();
          printf("\n");
             break;

    }
    }while(chose!=0);

    return 0;
}
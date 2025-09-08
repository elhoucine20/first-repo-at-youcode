#include <stdio.h>
#define Max 100

float Note[Max];
float max, min, Moyenne;
int n;
float valeur;

void SaisirNotes() {
    printf("Saisir combien des notes voulez vous entree ? ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Note[%d] = ", i + 1);
        scanf("%f", &Note[i]);
    }
}

void AfficherNotes() {
    printf("____Liste des Notes_____:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", Note[i]);
    }
    printf("\n\n");
}

float trouverMoyenne() {
    float S = 0;
    for (int i = 0; i < n; i++) {
        S = S + Note[i];
    }
            Moyenne = S / n;
    printf("La moyenne est : %.2f\n", Moyenne);
    return Moyenne;
}

float trouverMax() {
             max = Note[0];
    for (int i = 1; i < n; i++) {
        if (Note[i] > max)
            max = Note[i];
    }
    printf("Le maximum est : %.2f\n", max);
    return max;
}

float trouverMin() {
           min = Note[0];
    for (int i = 1; i < n; i++) {
        if (Note[i] < min)
            min = Note[i];
    }
    printf("Le minimum est : %.2f\n", min);
    return min;
}

int compterAdmis() {
    printf("Les admis : ");

for (int i = 0; i < n; i++) {
        if (Note[i] >= 10)
            printf("%.2f ", Note[i]);
    }
    printf("\n");
    return 0;
}

int compterNonAdmis() {
    printf("Les non admis : ");
    for (int i = 0; i < n; i++) {
        if (Note[i] < 10)
            printf("%.2f ", Note[i]);
    }
    printf("\n");
    return 0;
}

int ajouterNote() {
    if (n >= Max) {
        printf("impossible d'ajouter! le tableau est complete \n");
        return 0;
    }
    Note[n] = valeur;
    n++;
    printf("la Note est ajoutee \n");
    return 1;
}

void modifierNote() {
    int indice;
    float NouvelleValeur;
    printf("indice de la note modifier : ");
    scanf("%d", &indice);
    if (indice < 0 || indice >= n) {
        printf("indice invalide.\n");
    }
    else{
    printf("Saisir nouvelle valeur : ");
    scanf("%f", &NouvelleValeur);
    Note[indice] = NouvelleValeur;
    printf("La note est modifiee.\n");
    }
}

void supprimerNote() {
    int indice;
    printf("saisir l'indice de la note a supprimer : ");
    scanf("%d", &indice);
    if (indice < 0 || indice >= n) {
        printf("this indice invalide.\n");
    }
    else {
for (int i = indice; i < n - 1; i++) {
        Note[i] = Note[i + 1];
    }
    n--;
    printf("la note est supprimee \n");
    }
}

int main() {
    int chose;
    
        printf("★★★Gestion de Notes★★★\n\n");
    do {
        printf("°°°°°°°MENU°°°°°°°\n");
        printf("1 : Saisir N Notes\n");
        printf("2 : Afficher les Notes\n");
        printf("3 : Statistiques (Moyenne, Max, Min, Admis, Non Admis)\n");
        printf("4 : Ajouter une Note\n");
        printf("5 : Modifier une Note\n");
        printf("6 : Supprimer une Note\n");
        printf("0 : Quitter\n");
        printf("Saisir votre chose : ");
        scanf("%d", &chose);

        switch (chose) {
            case 1: SaisirNotes();
                     printf("\n");
                 break;
            case 2: AfficherNotes();
                     printf("\n");
                 break;
            case 3:
                trouverMoyenne();
                trouverMax();
                trouverMin();
                compterAdmis();
                compterNonAdmis();
                printf("\n");
                break;
            case 4:
                printf("Entrez la note a ajouter : ");
                scanf("%f", &valeur);
                ajouterNote();
                printf("\n");
                break;
            case 5: modifierNote(); 
                    printf("\n");
                break;
            case 6: supprimerNote();
                     printf("\n");
                break;

            case 0: printf(" c'est la fin du programme.\n");
                break;
            default: printf(" Chose invalide.\n");
                 break;
        }

    } while (chose != 0);

    return 0;
}
    

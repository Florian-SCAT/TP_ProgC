#include <stdio.h>
#include <string.h>
#include "fichier.h"

#define NB_ETUDIANTS 5

// Structure pour stocker les informations d'un étudiant
typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

int main() {
    Etudiant etudiants[NB_ETUDIANTS];
    char ligne[256];  // Pour stocker temporairement la ligne à écrire
    char fichier_nom[] = "etudiant.txt";

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);  // Lire jusqu'au '\n'

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);
    }

    // Écriture des étudiants dans le fichier
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        sprintf(ligne, "%s,%s,%s,%.2f,%.2f\n",
                etudiants[i].nom,
                etudiants[i].prenom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);

        ecrire_dans_fichier(fichier_nom, ligne);  // Utilise la fonction de fichier.c
    }

    printf("Les détails des étudiants ont été enregistrés dans le fichier %s.\n", fichier_nom);

    return 0;
}

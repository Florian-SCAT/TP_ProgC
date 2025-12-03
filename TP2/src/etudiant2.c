#include <stdio.h>
#include <string.h>

// Définition de la structure Étudiant
typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;
    float note_sys;
} Etudiant;

int main(void) {
    Etudiant etudiants[5];
    int i;

    // Initialisation des données avec strcpy pour les chaînes
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Linh");
    strcpy(etudiants[2].adresse, "5 rue C, Marseille");
    etudiants[2].note_prog = 18.0;
    etudiants[2].note_sys = 17.5;

    strcpy(etudiants[3].nom, "Ali");
    strcpy(etudiants[3].prenom, "Sara");
    strcpy(etudiants[3].adresse, "12 boulevard D, Lille");
    etudiants[3].note_prog = 14.5;
    etudiants[3].note_sys = 15.0;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Luc");
    strcpy(etudiants[4].adresse, "7 rue E, Toulouse");
    etudiants[4].note_prog = 16.0;
    etudiants[4].note_sys = 16.5;

    // Affichage des informations des étudiants
    for (i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------\n");
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    // Tableaux pour les noms et prénoms
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Ali", "Petit"};
    char prenoms[5][20] = {"Jean", "Marie", "Linh", "Sara", "Luc"};

    // Tableau pour les adresses
    char adresses[5][50] = {
        "10 rue A, Paris",
        "22 avenue B, Lyon",
        "5 rue C, Marseille",
        "12 boulevard D, Lille",
        "7 rue E, Toulouse"
    };

    // Tableaux pour les notes
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 13.5, 17.0, 15.0, 16.5};

    int i;

    printf("Informations des étudiants :\n\n");

    for (i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}

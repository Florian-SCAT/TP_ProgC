#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tableau[100];
    int i, j, temp;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 0 et 999
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000;
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles (bubble sort) pour trier en ordre croissant
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tableau[100];
    int i;
    int max, min;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Initialisation du min et max avec le premier élément
    max = tableau[0];
    min = tableau[0];

    // Parcours du tableau pour trouver le max et le min
    for (i = 1; i < 100; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Affichage des résultats
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}

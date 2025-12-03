#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tableau[100];
    int i, valeur, trouve = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 0 et 99
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 100;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demander à l'utilisateur de saisir un entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche linéaire dans le tableau
    for (i = 0; i < 100; i++) {
        if (tableau[i] == valeur) {
            trouve = 1;
            break; // on peut s'arrêter dès qu'on trouve l'entier
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}

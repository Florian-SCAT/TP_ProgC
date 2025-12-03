#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tableau[100];
    int i, valeur;
    
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires et triées
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000; // valeurs entre 0 et 999
    }

    // Tri du tableau par ordre croissant (tri à bulles pour simplicité)
    for (i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche dichotomique (binaire)
    int debut = 0, fin = 99, milieu;
    int trouve = 0;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        if (tableau[milieu] == valeur) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
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

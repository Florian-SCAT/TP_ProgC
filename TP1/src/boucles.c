#include <stdio.h>

int main(void) {
    int compteur = 5; // changer la valeur pour tester, doit être < 10
    int i, j;

    for (i = 1; i <= compteur; i++) {       // boucle pour les lignes
        for (j = 1; j <= i; j++) {          // boucle pour les colonnes
            if (i % 2 == 0 && j % 2 == 0) { // condition pour afficher #
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n"); // nouvelle ligne après chaque ligne
    }

    return 0;
}

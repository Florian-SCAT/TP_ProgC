#include <stdio.h>

int main(void) {
    int n = 5; // hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {
        // Affichage des espaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Affichage des nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Affichage des nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // nouvelle ligne après chaque niveau
    }

    printf("Génération de la pyramide terminée.\n");

    return 0;
}


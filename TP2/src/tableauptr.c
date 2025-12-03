/* fichier : tableauptr.c
 * Parcours et modification des tableaux uniquement avec des pointeurs (pas d'indice arr[i])
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int N = 11;                  /* taille des tableaux */
    int tabInt[N];
    float tabFloat[N];

    /* initialisation du générateur pseudo-aléatoire */
    srand((unsigned)time(NULL));

    /* remplissage des tableaux avec des valeurs aléatoires (sans notation indicielle) */
    int *pInt = tabInt;
    float *pFloat = tabFloat;
    int k;
    for (k = 0; k < N; k++) {
        /* entiers entre 0 et 200 */
        *pInt = rand() % 201;
        pInt++;

        /* floats entre 0.00 et 30.00 (2 décimales) */
        *pFloat = (rand() % 3001) / 100.0f; 
        pFloat++;
    }

    /* affichage avant modification */
    printf("Tableau d'entiers (avant) :\n");
    pInt = tabInt;
    for (k = 0; k < N; k++) {
        printf("%d", *pInt);
        if (k < N-1) printf(", ");
        pInt++;
    }
    printf("\n\n");

    printf("Tableau de floats (avant) :\n");
    pFloat = tabFloat;
    for (k = 0; k < N; k++) {
        printf("%.2f", *pFloat);
        if (k < N-1) printf(", ");
        pFloat++;
    }
    printf("\n\n");

    /* multiplication par 3 des éléments dont l'indice est divisible par 2 */
    pInt = tabInt;
    pFloat = tabFloat;
    for (k = 0; k < N; k++) {
        if (k % 2 == 0) {
            *pInt = (*pInt) * 3;
            *pFloat = (*pFloat) * 3.0f;
        }
        pInt++;
        pFloat++;
    }

    /* affichage après modification */
    printf("Tableau d'entiers (après) :\n");
    pInt = tabInt;
    for (k = 0; k < N; k++) {
        printf("%d", *pInt);
        if (k < N-1) printf(", ");
        pInt++;
    }
    printf("\n\n");

    printf("Tableau de floats (après) :\n");
    pFloat = tabFloat;
    for (k = 0; k < N; k++) {
        printf("%.2f", *pFloat);
        if (k < N-1) printf(", ");
        pFloat++;
    }
    printf("\n");

    return 0;
}

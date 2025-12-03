#include <stdio.h>

int main(void) {
    int a = 2; // base
    int b = 3; // exposant
    int resultat = 1; // initialisation à 1 pour la multiplication
    int i;

    for (i = 1; i <= b; i++) {
        resultat *= a; // multiplication répétée
    }

    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}

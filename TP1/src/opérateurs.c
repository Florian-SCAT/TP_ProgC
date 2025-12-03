#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    // ----- Opérateurs arithmétiques -----
    printf("Addition (a + b) : %d\n", a + b);
    printf("Soustraction (a - b) : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Division (a / b) : %d\n", a / b);
    printf("Modulo (a %% b) : %d\n", a % b);  // %% pour afficher %

    // ----- Opérateurs de comparaison -----
    printf("a == b ? : %d\n", a == b);  // 1 = vrai, 0 = faux
    printf("a > b ? : %d\n", a > b);    // 1 = vrai, 0 = faux
    printf("a < b ? : %d\n", a < b);    // exemple supplémentaire

    // ----- Opérateurs logiques -----
    printf("(a > b) && (b > 0) ? : %d\n", (a > b) && (b > 0));  // ET logique
    printf("(a < b) || (b > 0) ? : %d\n", (a < b) || (b > 0));  // OU logique
    printf("!(a == b) ? : %d\n", !(a == b));                    // NON logique

    return 0;
}

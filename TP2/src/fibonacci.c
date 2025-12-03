#include <stdio.h>

int main(void) {
    int n = 7; // nombre de termes à générer
    int i;
    int u0 = 0, u1 = 1, suivant;

    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            suivant = u0 + u1;
            printf(", %d", suivant);
            u0 = u1;
            u1 = suivant;
        }
    }

    printf("\n");
    return 0;
}

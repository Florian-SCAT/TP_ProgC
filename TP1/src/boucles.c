#include <stdio.h>

int main(void) {
    int compteur = 5; // doit être < 10
    int i, j;

    for (i = 1; i <= compteur; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

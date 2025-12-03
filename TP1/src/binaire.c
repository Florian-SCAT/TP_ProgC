#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int i;
    int taille = sizeof(unsigned int) * 8; // nombre de bits dans un int

    for (i = taille - 1; i >= 0; i--) {
        // on teste si le ième bit est à 1 ou 0
        if (n & (1U << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main(void) {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nombre : %u -> Binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}

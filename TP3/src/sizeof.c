#include <stdio.h>

int main(void) {
    // Types de base
    printf("Taille de int      : %zu octets\n", sizeof(int));
    printf("Taille de char     : %zu octets\n", sizeof(char));
    printf("Taille de short    : %zu octets\n", sizeof(short));
    printf("Taille de long     : %zu octets\n", sizeof(long));
    printf("Taille de long long: %zu octets\n", sizeof(long long));
    printf("Taille de float    : %zu octets\n", sizeof(float));
    printf("Taille de double   : %zu octets\n", sizeof(double));
    printf("Taille de long double : %zu octets\n", sizeof(long double));

    // Pointeurs simples
    printf("Taille de int*     : %zu octets\n", sizeof(int*));
    printf("Taille de char*    : %zu octets\n", sizeof(char*));
    printf("Taille de float*   : %zu octets\n", sizeof(float*));

    // Pointeurs de pointeurs
    printf("Taille de int**    : %zu octets\n", sizeof(int**));
    printf("Taille de char**   : %zu octets\n", sizeof(char**));
    printf("Taille de float**  : %zu octets\n", sizeof(float**));

    // Pointeurs de pointeurs de pointeurs
    printf("Taille de int***   : %zu octets\n", sizeof(int***));
    printf("Taille de char***  : %zu octets\n", sizeof(char***));
    printf("Taille de float*** : %zu octets\n", sizeof(float***));

    return 0;
}

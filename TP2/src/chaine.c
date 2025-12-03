#include <stdio.h>

int main(void) {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[100];      // tableau pour copier str1
    char concat[200];     // tableau pour concaténer str1 et str2
    int i, j;

    // ----- Calcul de la longueur de str1 -----
    int longueur1 = 0;
    while (str1[longueur1] != '\0') {
        longueur1++;
    }
    printf("Longueur de str1 : %d\n", longueur1);

    // ----- Copie de str1 dans copie -----
    i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // terminer la chaîne copiée
    printf("Copie de str1 : %s\n", copie);

    // ----- Concaténation str1 + str2 dans concat -----
    // Copier str1 dans concat
    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    // Ajouter str2 après str1
    j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // terminer la chaîne concaténée
    printf("Concaténation str1 + str2 : %s\n", concat);

    return 0;
}

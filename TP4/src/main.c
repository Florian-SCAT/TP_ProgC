#include <stdio.h>
#include "operator.h"   // Pour exercice_4_1
#include "fichier.h"    // Pour exercice_4_2
#include "liste.h"      // Pour exercice_4_7

int main() {
    int choix;
    printf("Choisissez l'exercice : 1, 2 ou 7 : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1: exercice_4_1(); break;
        case 2: exercice_4_2(); break;
        case 7: exercice_4_7(); break;
        default: printf("Choix invalide.\n");
    }

    return 0;
}

#include <stdio.h>

// ----- Fonctions correspondant aux exercices -----

// Exercice 4.1
void exercice_4_1() {
    printf("Exercice 4.1 exécuté.\n");
    // Place ici le code spécifique à l'exercice 4.1
}

// Exercice 4.2
void exercice_4_2() {
    printf("Exercice 4.2 exécuté.\n");
    // Place ici le code spécifique à l'exercice 4.2
}

// Exercice 4.7
void exercice_4_7() {
    printf("Exercice 4.7 exécuté.\n");
    // Place ici le code spécifique à l'exercice 4.7
}

// Exercice 4.0 - Débogage avec printf / gdb
void exercice_4_0() {
    printf("Exercice 4.0 exécuté : Débogage.\n");
    int a = 5;
    int b = 0;
    int c = a / (b + 1); // simple exemple pour gdb
    printf("Résultat : %d\n", c);
}

// ----- Fonction principale -----
int main(void) {
    int choix;

    printf("Choisissez l'exercice à exécuter :\n");
    printf("0 : Exercice 4.0 (Débogage)\n");
    printf("1 : Exercice 4.1\n");
    printf("2 : Exercice 4.2\n");
    printf("7 : Exercice 4.7\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 0:
            exercice_4_0();
            break;
        case 1:
            exercice_4_1();
            break;
        case 2:
            exercice_4_2();
            break;
        case 7:
            exercice_4_7();
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}


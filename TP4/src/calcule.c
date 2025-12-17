#include <stdio.h>
#include <stdlib.h>
#include "operator.h" // Inclut les prototypes des fonctions

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <operateur> <nombre1> [<nombre2>]\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];
    int a = atoi(argv[2]);
    int b = 0;

    // Vérifier si l'opérateur nécessite un deuxième nombre
    if (op != '~') {
        if (argc < 4) {
            printf("Erreur : L'opérateur '%c' nécessite deux nombres.\n", op);
            return 1;
        }
        b = atoi(argv[3]);
    }

    int resultat;

    switch(op) {
        case '+':
            resultat = somme(a, b);
            break;
        case '-':
            resultat = difference(a, b);
            break;
        case '*':
            resultat = produit(a, b);
            break;
        case '/':
            resultat = quotient(a, b);
            break;
        case '%':
            resultat = modulo(a, b);
            break;
        case '&':
            resultat = et_bit(a, b);
            break;
        case '|':
            resultat = ou_bit(a, b);
            break;
        case '~':
            resultat = negation(a);
            break;
        default:
            printf("Erreur : Opérateur inconnu '%c'\n", op);
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}

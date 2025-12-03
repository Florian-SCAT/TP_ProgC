#include "operator.h"

// Addition
int somme(int a, int b) {
    return a + b;
}

// Soustraction
int difference(int a, int b) {
    return a - b;
}

// Multiplication
int produit(int a, int b) {
    return a * b;
}

// Division
int quotient(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Erreur : division par zéro !\n");
        return 0;
    }
}

// Modulo
int modulo(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Erreur : division par zéro !\n");
        return 0;
    }
}

// ET bit à bit
int et_bit(int a, int b) {
    return a & b;
}

// OU bit à bit
int ou_bit(int a, int b) {
    return a | b;
}

// Négation bit à bit (uniquement sur le premier opérande)
int negation(int a) {
    return ~a;
}

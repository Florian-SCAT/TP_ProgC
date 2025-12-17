#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factorielle(int num) {
    if (num < 0) {
        printf("Erreur : factorielle non définie pour les nombres négatifs (%d)\n", num);
        return -1; // Code d'erreur
    }

    if (num == 0) {
        return 1;
    } else {
        return num * factorielle(num - 1);
    }
}

int main() {
    int nombres[] = {0, 1, 5, 7, 10}; // Exemples de tests
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];
        int resultat = factorielle(n);
        if (resultat != -1) { // Vérifie que la factorielle est valide
            printf("%d! = %d\n", n, resultat);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Structure pour stocker une couleur distincte et son nombre d'occurrences
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

int main(void) {
    Couleur tableau[100];
    CouleurDistincte distinctes[100];
    int n_distinctes = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau de 100 couleurs aléatoires
    for (int i = 0; i < 100; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < 100; i++) {
        int trouve = 0;
        for (int j = 0; j < n_distinctes; j++) {
            if (tableau[i].R == distinctes[j].couleur.R &&
                tableau[i].G == distinctes[j].couleur.G &&
                tableau[i].B == distinctes[j].couleur.B &&
                tableau[i].A == distinctes[j].couleur.A) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[n_distinctes].couleur = tableau[i];
            distinctes[n_distinctes].compteur = 1;
            n_distinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leur nombre d'occurrences
    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < n_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}

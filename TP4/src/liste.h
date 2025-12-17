#ifndef LISTE_H
#define LISTE_H

#include <stdint.h> // Pour uint8_t

// Structure représentant une couleur RGBA
struct couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

// Noeud de la liste chaînée
struct noeud {
    struct couleur data;
    struct noeud *suivant;
};

// Structure représentant la liste
struct liste_couleurs {
    struct noeud *tete;
};

// Fonctions pour gérer la liste
void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *c, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);

#endif

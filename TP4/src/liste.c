#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

// Initialiser la liste
void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

// Insérer une couleur à la fin de la liste
void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct noeud *nouveau = (struct noeud *)malloc(sizeof(struct noeud));
    if (!nouveau) {
        printf("Erreur : mémoire insuffisante\n");
        return;
    }
    nouveau->data = *c;
    nouveau->suivant = NULL;

    if (liste->tete == NULL) {
        liste->tete = nouveau;
    } else {
        struct noeud *courant = liste->tete;
        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }
        courant->suivant = nouveau;
    }
}

// Parcourir la liste et afficher les couleurs
void parcours(struct liste_couleurs *liste) {
    struct noeud *courant = liste->tete;
    int index = 1;
    while (courant != NULL) {
        printf("Couleur %d : R=%d, G=%d, B=%d, A=%d\n",
               index, courant->data.r, courant->data.g, courant->data.b, courant->data.a);
        courant = courant->suivant;
        index++;
    }
}

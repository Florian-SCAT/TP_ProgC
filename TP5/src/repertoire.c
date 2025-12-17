#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

// ---------- Exercice 5.1 ----------
void lire_dossier(const char *nom_repertoire) {
    DIR *dossier = opendir(nom_repertoire);
    if (!dossier) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    struct dirent *entree;
    printf("Contenu du répertoire '%s' :\n", nom_repertoire);
    while ((entree = readdir(dossier)) != NULL) {
        printf("%s\n", entree->d_name);
    }

    closedir(dossier);
}

// ---------- Exercice 5.2 ----------
void lire_dossier_recursif(const char *nom_repertoire) {
    DIR *dossier = opendir(nom_repertoire);
    if (!dossier) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    struct dirent *entree;
    while ((entree = readdir(dossier)) != NULL) {
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
            continue;

        char *chemin = malloc(strlen(nom_repertoire) + strlen(entree->d_name) + 2);
        if (!chemin) {
            perror("Erreur allocation mémoire");
            closedir(dossier);
            return;
        }
        sprintf(chemin, "%s/%s", nom_repertoire, entree->d_name);

        printf("%s\n", chemin);

        struct stat sb;
        if (stat(chemin, &sb) == 0 && S_ISDIR(sb.st_mode)) {
            lire_dossier_recursif(chemin);
        }

        free(chemin);
    }

    closedir(dossier);
}

// ---------- Exercice 5.3 ----------
typedef struct Node {
    char *chemin;
    struct Node *suivant;
} Node;

void push(Node **pile, const char *chemin) {
    Node *n = malloc(sizeof(Node));
    n->chemin = strdup(chemin);
    n->suivant = *pile;
    *pile = n;
}

char *pop(Node **pile) {
    if (!*pile) return NULL;
    Node *n = *pile;
    char *chemin = n->chemin;
    *pile = n->suivant;
    free(n);
    return chemin;
}

void lire_dossier_iteratif(const char *nom_repertoire) {
    Node *pile = NULL;
    push(&pile, nom_repertoire);

    while (pile) {
        char *current = pop(&pile);
        DIR *dossier = opendir(current);
        if (!dossier) {
            perror(current);
            free(current);
            continue;
        }

        struct dirent *entree;
        while ((entree = readdir(dossier)) != NULL) {
            if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
                continue;

            char *chemin = malloc(strlen(current) + strlen(entree->d_name) + 2);
            sprintf(chemin, "%s/%s", current, entree->d_name);
            printf("%s\n", chemin);

            struct stat sb;
            if (stat(chemin, &sb) == 0 && S_ISDIR(sb.st_mode)) {
                push(&pile, chemin); // ajouter le sous-dossier à la pile
            } else {
                free(chemin); // fichier => libérer la mémoire
            }
        }

        closedir(dossier);
        free(current);
    }
}

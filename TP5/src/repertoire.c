#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>    // opendir, readdir, closedir
#include <string.h>    // strcmp
#include <sys/stat.h>  // stat
#include <stdlib.h>    // malloc, free

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
        // Ignorer "." et ".."
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
            continue;

        // Construire le chemin complet
        char *chemin = malloc(strlen(nom_repertoire) + strlen(entree->d_name) + 2);
        if (!chemin) {
            perror("Erreur allocation mémoire");
            closedir(dossier);
            return;
        }
        sprintf(chemin, "%s/%s", nom_repertoire, entree->d_name);

        // Afficher le nom
        printf("%s\n", chemin);

        // Vérifier si c'est un répertoire
        struct stat sb;
        if (stat(chemin, &sb) == 0 && S_ISDIR(sb.st_mode)) {
            // Appel récursif pour le sous-répertoire
            lire_dossier_recursif(chemin);
        }

        free(chemin);
    }

    closedir(dossier);
}

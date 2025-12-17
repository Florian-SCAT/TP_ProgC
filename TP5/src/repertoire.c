#include "repertoire.h"
#include <stdio.h>
#include <dirent.h> // opendir, readdir, closedir

void lire_dossier(const char *nom_repertoire) {
    DIR *dossier = opendir(nom_repertoire);
    if (dossier == NULL) {
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

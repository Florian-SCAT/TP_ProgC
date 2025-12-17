#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIGNE 1024  // Taille maximale d'une ligne

// Fonction pour compter combien de fois "mot" apparaît dans "ligne"
int compter_occurrences(const char *ligne, const char *mot) {
    int count = 0;
    const char *p = ligne;

    while ((p = strstr(p, mot)) != NULL) { // strstr trouve la sous-chaîne
        count++;
        p += strlen(mot); // avance le pointeur après la dernière occurrence trouvée
    }

    return count;
}

int main() {
    char nomFichier[256];
    char phrase[256];

    // Demander le nom du fichier
    printf("Entrez le nom du fichier : ");
    scanf("%255s", nomFichier);

    // Ouvrir le fichier en lecture
    FILE *fichier = fopen(nomFichier, "r");
    if (!fichier) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    // Demander la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // Consommer le \n restant du scanf précédent
    fgets(phrase, sizeof(phrase), stdin);

    // Retirer le \n final de fgets
    phrase[strcspn(phrase, "\n")] = 0;

    char ligne[MAX_LIGNE];
    int numeroLigne = 0;
    int trouve = 0;

    printf("\nRésultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), fichier)) {
        numeroLigne++;
        int nbOccurrences = compter_occurrences(ligne, phrase);
        if (nbOccurrences > 0) {
            printf("Ligne %d, %d fois\n", numeroLigne, nbOccurrences);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucune occurrence trouvée.\n");
    }

    fclose(fichier);
    return 0;
}

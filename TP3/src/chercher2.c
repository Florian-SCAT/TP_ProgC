#include <stdio.h>

int main(void) {
    // Tableau de 10 phrases
    char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[200];
    int trouve = 0;

    // Demander à l'utilisateur la phrase à rechercher
    printf("Entrez la phrase à rechercher : ");
    fgets(recherche, sizeof(recherche), stdin);

    // Supprimer le caractère de saut de ligne éventuel à la fin
    int len = 0;
    while (recherche[len] != '\0') {
        if (recherche[len] == '\n') {
            recherche[len] = '\0';
            break;
        }
        len++;
    }

    // Parcourir le tableau de phrases
    for (int i = 0; i < 10; i++) {
        int j = 0;
        int correspond = 1;
        while (phrases[i][j] != '\0' || recherche[j] != '\0') {
            if (phrases[i][j] != recherche[j]) {
                correspond = 0;
                break;
            }
            j++;
        }
        if (correspond) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}

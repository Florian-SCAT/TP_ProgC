#include <stdio.h>

int main(void) {
    unsigned int d = 0x01080010; // exemple de valeur, tu peux changer
    int bit4, bit20;
    int resultat;

    // On suppose que le bit de gauche le plus significatif est le bit 31 (pour un int 32 bits)

    // 4ème bit de gauche = bit 28 si on compte de 31 à 0
    bit4 = (d >> (32 - 4)) & 1;   // décale de 28 bits vers la droite et masque le bit

    // 20ème bit de gauche = bit 12
    bit20 = (d >> (32 - 20)) & 1; // décale de 12 bits vers la droite et masque le bit

    // Vérification si les deux bits sont à 1
    if (bit4 && bit20) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("%d\n", resultat);

    return 0;
}

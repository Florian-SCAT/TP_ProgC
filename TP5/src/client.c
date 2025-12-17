#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "client.h"

/**
 * Fonction pour envoyer et recevoir un message depuis un client connecté à la socket.
 */
int envoie_recois_message(int socketfd)
{
    char data[1024];
    memset(data, 0, sizeof(data));

    char message[1024];
    printf("Votre message (max 1000 caractères): ");
    fgets(message, sizeof(message), stdin);

    strcpy(data, "message: ");
    strcat(data, message);

    if (write(socketfd, data, strlen(data)) < 0) {
        perror("Erreur d'écriture");
        return -1;
    }

    memset(data, 0, sizeof(data));
    int n = read(socketfd, data, sizeof(data));
    if (n < 0) {
        perror("Erreur de lecture");
        return -1;
    }

    printf("Message reçu: %s\n", data);
    return 0;
}

/**
 * Fonction pour envoyer un calcul au serveur
 */
void envoie_operateur_numeros(int sock, char operateur, int a, int b)
{
    char message[1024];
    snprintf(message, sizeof(message), "calcule : %c %d %d", operateur, a, b);
    write(sock, message, strlen(message));

    char buffer[1024];
    int n = read(sock, buffer, sizeof(buffer));
    if (n > 0) {
        buffer[n] = '\0';
        printf("Résultat: %s\n", buffer);
    }
}

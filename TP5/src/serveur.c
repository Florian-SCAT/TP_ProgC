#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "serveur.h"

/**
 * Envoie un message au client
 */
int renvoie_message(int client_socket_fd, char *data)
{
    if (write(client_socket_fd, data, strlen(data)) < 0) {
        perror("Erreur d'écriture");
        return -1;
    }
    return 0;
}

/**
 * Reçoit un message classique et renvoie la réponse
 */
int recois_envoie_message(int client_socket_fd, char *data)
{
    printf("Message reçu: %s\n", data);
    char code[10];
    if (sscanf(data, "%9s:", code) == 1) {
        if (strcmp(code, "message:") == 0) {
            return renvoie_message(client_socket_fd, data);
        }
    }
    return 0;
}

/**
 * Reçoit un message de calcul et renvoie le résultat
 */
void recois_numeros_calcule(int client_socket_fd, char *message)
{
    char operateur;
    int a, b, result;

    if (sscanf(message, "calcule : %c %d %d", &operateur, &a, &b) != 3) {
        char err[] = "Format invalide. Utilisez: calcule : <op> <a> <b>\n";
        write(client_socket_fd, err, strlen(err));
        return;
    }

    switch (operateur) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0) result = a / b;
            else { write(client_socket_fd, "Erreur : division par zéro\n", 27); return; }
            break;
        case '%':
            if (b != 0) result = a % b;
            else { write(client_socket_fd, "Erreur : modulo par zéro\n", 26); return; }
            break;
        default: write(client_socket_fd, "Opérateur inconnu\n", 18); return;
    }

    char buffer[1024];
    snprintf(buffer, sizeof(buffer), "calcule : %d\n", result);
    write(client_socket_fd, buffer, strlen(buffer));
}

/**
 * Gère un client (messages classiques et calculs)
 */
void gerer_client(int client_socket_fd)
{
    char data[1024];
    while (1) {
        memset(data, 0, sizeof(data));
        int n = read(client_socket_fd, data, sizeof(data));
        if (n <= 0) { close(client_socket_fd); break; }

        if (strncmp(data, "message:", 8) == 0) {
            recois_envoie_message(client_socket_fd, data);
        } else if (strncmp(data, "calcule :", 9) == 0) {
            recois_numeros_calcule(client_socket_fd, data);
        } else {
            char err[] = "Message non reconnu\n";
            write(client_socket_fd, err, strlen(err));
        }
    }
}

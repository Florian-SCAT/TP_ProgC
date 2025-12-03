#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '+'; // changer selon l'opération : '+', '-', '*', '/', '%', '&', '|', '~'
    int result;

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : division par zéro\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 %



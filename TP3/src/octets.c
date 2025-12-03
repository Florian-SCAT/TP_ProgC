#include <stdio.h>

int main(void) {
    short s = 0x0203;
    int i = 0x01020304;
    long li = 0x0102030405060708;
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    unsigned char *p;
    int taille, j;

    // ----- Short -----
    printf("Octets de short :\n");
    p = (unsigned char*)&s;
    taille = sizeof(s);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // ----- Int -----
    printf("Octets de int :\n");
    p = (unsigned char*)&i;
    taille = sizeof(i);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // ----- Long int -----
    printf("Octets de long int :\n");
    p = (unsigned char*)&li;
    taille = sizeof(li);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // ----- Float -----
    printf("Octets de float :\n");
    p = (unsigned char*)&f;
    taille = sizeof(f);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // ----- Double -----
    printf("Octets de double :\n");
    p = (unsigned char*)&d;
    taille = sizeof(d);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // ----- Long double -----
    printf("Octets de long double :\n");
    p = (unsigned char*)&ld;
    taille = sizeof(ld);
    for (j = 0; j < taille; j++) {
        printf("%02x ", p[j]);
    }
    printf("\n");

    return 0;
}

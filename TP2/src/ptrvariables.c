#include <stdio.h>

int main(void) {
    // ----- VARIABLES -----
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 50000;

    int i = -123456789;
    unsigned int ui = 4000000000U;

    long li = -1234567890L;
    unsigned long uli = 4000000000UL;

    long long lli = -123456789012345LL;
    unsigned long long ulli = 123456789012345ULL;

    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    // ----- POINTEURS -----
    char *pc = &c;
    signed char *psc = &sc;
    unsigned char *puc = &uc;

    short *ps = &s;
    unsigned short *pus = &us;

    int *pi = &i;
    unsigned int *pui = &ui;

    long *pli = &li;
    unsigned long *puli = &uli;

    long long *plli = &lli;
    unsigned long long *pulli = &ulli;

    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // ----- AFFICHAGE AVANT MANIPULATION -----
    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *pc);
    printf("Adresse de sc : %p, Valeur : %x\n", (void*)psc, *psc);
    printf("Adresse de uc : %p, Valeur : %x\n", (void*)puc, *puc);

    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *ps);
    printf("Adresse de us : %p, Valeur : %x\n", (void*)pus, *pus);

    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *pi);
    printf("Adresse de ui : %p, Valeur : %x\n", (void*)pui, *pui);

    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *pli);
    printf("Adresse de uli : %p, Valeur : %lx\n", (void*)puli, *puli);

    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *plli);
    printf("Adresse de ulli : %p, Valeur : %llx\n", (void*)pulli, *pulli);

    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %lx\n", (void*)pd, *(unsigned long*)pd);
    printf("Adresse de ld : %p, Valeur : %llx\n", (void*)pld, *(unsigned long long*)pld);

    // ----- MANIPULATION VIA POINTEURS -----
    *pc = 'B';
    *psc = -32;
    *puc = 150;

    *ps = 1234;
    *pus = 60000;

    *pi = 987654321;
    *pui = 3000000000U;

    *pli = -9876543210L;
    *puli = 3500000000UL;

    *plli = -98765432101234LL;
    *pulli = 98765432101234ULL;

    *(unsigned int*)pf = 0x40000000; // float 2.0
    *(unsigned long*)pd = 0x400921fb54442d18; // double approx π
    *(unsigned long long*)pld = 0x400921fb54442d18; // long double approximation

    // ----- AFFICHAGE APRÈS MANIPULATION -----
    printf("\nAprès manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *pc);
    printf("Adresse de sc : %p, Valeur : %x\n", (void*)psc, *psc);
    printf("Adresse de uc : %p, Valeur : %x\n", (void*)puc, *puc);

    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *ps);
    printf("Adresse de us : %p, Valeur : %x\n", (void*)pus, *pus);

    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *pi);
    printf("Adresse de ui : %p, Valeur : %x\n", (void*)pui, *pui);

    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *pli);
    printf("Adresse de uli : %p, Valeur : %lx\n", (void*)puli, *puli);

    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *plli);
    printf("Adresse de ulli : %p, Valeur : %llx\n", (void*)pulli, *pulli);

    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %lx\n", (void*)pd, *(unsigned long*)pd);
    printf("Adresse de ld : %p, Valeur : %llx\n", (void*)pld, *(unsigned long long*)pld);

    return 0;
}

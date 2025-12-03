int main(void) {
    // ----- CHAR -----
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    // ----- SHORT -----
    short s = -12345;
    unsigned short us = 50000;

    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);

    // ----- INT -----
    int i = -123456789;
    unsigned int ui = 4000000000U;

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    // ----- LONG INT -----
    long li = -1234567890L;
    unsigned long uli = 4000000000UL;

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    // ----- LONG LONG INT -----
    long long lli = -123456789012345LL;
    unsigned long long ulli = 123456789012345ULL;

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    // ----- FLOAT -----
    float f = 3.14f;
    printf("float : %f\n", f);

    // ----- DOUBLE -----
    double d = 3.141592653589793;
    printf("double : %lf\n", d);

    // ----- LONG DOUBLE -----
    long double ld = 3.141592653589793238L;
    printf("long double : %Lf\n", ld);

    return 0;
}

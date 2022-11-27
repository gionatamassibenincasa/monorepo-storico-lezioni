#include <cstdio>

int main () {
    unsigned char a = 5;
    unsigned char b = 7;
    unsigned char c;
    
    c = a | b;
    printf("%d | %d = %d\n", a, b, c);

    c = a & b;
    printf("%d & %d = %d\n", a, b, c);

    c = ~a;
    printf("~%d = %d\n", a, c);

    c = a >> 1;
    printf("%d >> 1 = %d\n", a, c);

    c = a >> 2;
    printf("%d >> 2 = %d\n", a, c);

    c = a >> 3;
    printf("%d >> 3 = %d\n", a, c);


    c = a << 1;
    printf("%d << 1 = %d\n", a, c);

    c = a << 2;
    printf("%d << 2 = %d\n", a, c);

    c = a << 3;
    printf("%d << 3 = %d\n", a, c);

    return 0;
}

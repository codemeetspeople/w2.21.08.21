#include <stdio.h>

void base1(int n, int base) {
    int degree = 1;

    for ( int limit = n / base; degree <= limit; degree *= base );
    for ( ; degree > 0; degree /= base ) {
        printf("%d", n/degree);
        n = n % degree;
    }
    printf("\n");
}

void base2(int n, int base) {
    int digits = 0;
    int tmp;

    tmp = n;
    for ( ; tmp > 0; tmp /= base, digits++ );

    tmp = n;
    for ( int i = digits; i > 0; i-- ) {
        for ( int j = i - 1; j > 0; j-- ) { // j++
            tmp /= base;
        }
        printf("%d", tmp%base);
        tmp = n;
    }
    printf("\n");
}


int main() {
    int n, base;

    scanf("%d %d", &n, &base);

    base1(n, base);
    // printf("+++++++++"); Fuck why?
    base2(n, base);

    return 0;
}

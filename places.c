#include <stdio.h>

int places(int n, int base) {
    int places = 0;

    if ( n == 0 ) {
        return 1;
    }
    if ( n < 0 ) {
        places += 1;
    }

    for ( ; n != 0; n /= base, places++ );

    return places;
}

int main() {
    int n, base;

    scanf("%d %d", &n, &base);

    for ( ; n != 0; n /= base) {
        printf("%d", n % base);
    }
    printf("\n");

    return 0;
}

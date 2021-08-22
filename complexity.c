#include <stdio.h>

int bench1(int n, int *counter) {
    int sum = 0;

    if ( n <= 0 ) {
        return 1;
    }

    for ( int i = 0; i < n; i++ ) {
        sum += i;
        *counter += 1;
    }

    *counter += 1;

    return sum + bench1(n/2, counter);
}

int bench2(int n, int *counter) {
    *counter += 1;

    if ( n <= 0 ) {
        return 0;
    }
    return bench2(n-1, counter) + bench2(n-1, counter);
}

int main() {
    int counter = 0;

    bench2(SIZE, &counter);

    printf("%d\n", counter);

    return 0;
}

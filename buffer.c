#include <stdio.h>

int main() {
    char buffer[10000];

    for ( int i = 0, j = 0; i < 10000000; i++, j++ ) {
        buffer[j] = 'a';

        if ( j == 9999 ) {
            printf("%s", buffer);
            j = 0;
        }
    }

    return 0;
}

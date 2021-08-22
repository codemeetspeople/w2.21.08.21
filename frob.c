#include <stdio.h>

int main() {
    int length;

    scanf("%d", &length);

    for ( int i = 0; i < length; i++ ) {
        int tmp;

        scanf("%d", &tmp);
        printf("%d\n", tmp);
    }

    return 0;
}

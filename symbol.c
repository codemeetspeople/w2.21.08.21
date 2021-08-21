#include <stdio.h>

void strCopy(char destination[], char source[]) {
    int i = 0;

    for ( ; source[i] != '\0'; i++ ) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void strCopyPoiner(char *destination, char *source) {
    for ( ; *source != '\0'; destination++, source++ ) {
        *destination = *source;
    }
    *destination = '\0';
}

void strUpper(char str[]) {
    int offset = 'a' - 'A';

    for ( int i = 0; str[i] != 0; i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] -= offset;
        }
    }
}

int main() {
    char username[10] = "}Icaiman";

    strUpper(username);

    printf("Hello, %s!\n", username);

    strCopyPoiner(username, "admin");

    printf("Hello, %s!\n", username);

    return 0;
}

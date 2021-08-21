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

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("%d\n", strEqual("abc", ""));
    printf("%d\n", strEqual("", "abc"));
    printf("%d\n", strEqual("abc", "abcd"));
    printf("%d\n", strEqual("abcd", "abc"));
    printf("%d\n", strEqual("", ""));
    printf("%d\n", strEqual("abc", "abc"));


    return 0;
}

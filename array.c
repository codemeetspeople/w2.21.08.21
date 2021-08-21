#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayFill(int array[], int size, int value) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = value;
    }
}

void arrayDecrement(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] -= 1;
    }
}

int arraySum(int array[], int size) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result += array[i];
    }

    return result;
}


int main() {
    const int size = 10;
    int array[size];

    arrayFill(array, size, 99);
    arrayPrint(array, size);

    arrayDecrement(array, size);
    arrayPrint(array, size);

    printf("%d\n", arraySum(array, size));

    return 0;
}

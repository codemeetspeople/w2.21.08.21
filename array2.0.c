#include <stdio.h>

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out,"%d\n", array[last]);
}

void arrayDecrement(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] -= 1;
    }
}

int main() {
    const int size = 10;
    int array[size];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    arrayScan(in, array, size);
    arrayDecrement(array, size);
    arrayPrint(out, array, size);

    fclose(in);
    fclose(out);

    return 0;
}

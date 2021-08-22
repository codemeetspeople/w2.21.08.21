#include <stdio.h>
#include "arrayLib.h"
#include "anotherLib.h"

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

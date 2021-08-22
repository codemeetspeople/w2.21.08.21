#include <stdio.h>

#define USSR 32
#define HEAVY_TANK 1

int main() {
    int binary_data = 33;

    // for ( int i = 0; i <= 10; i++ ) {
    //     printf("%d\n", 1 << i);
    // }

    if ( (binary_data & USSR) == USSR ) {
        printf("Das ist a Soviet Tank\n");
    }

    if ( (binary_data & HEAVY_TANK) == HEAVY_TANK ) {
        printf("Das ist a heavy tank\n");
    }

    return 0;
}


// 100001 = 33

// 100000 = 32
// 000001 = 1

// 100 = USSR
// 010 = Germany
// 001 = France
// 110 = China

// 100 = Light Tank
// 010 = Medium
// 001 = Hard
// 110 = SAU

// 37 | 107 = 111


// 0100101 = 37
// 1101011 = 107

// 1101111

// 37 ^ 107

// 0100101
// 1101011

// 1001110 = 78

#include <stdio.h>

int main() {
    int x;
    for ( x = 33; x < 127; x++ ) {
        printf( "%d = %c\n", x, (char)x );
    }

    return 0;
}

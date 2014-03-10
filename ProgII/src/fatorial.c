#include <stdio.h>
#include <stdlib.h>

unsigned long int fatorial(unsigned long int c) {
    if (c > 1) {
        return c * fatorial(c - 1);
    } else {
        return c;
    }
}

int main() {

    unsigned long int f=1;

    while (f > 0){
        scanf("%ld", &f);
        printf("%ld\n",fatorial(f));
    }

    return EXIT_SUCCESS;
}

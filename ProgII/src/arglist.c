#include <stdarg.h>

float average(int n,...) {

    int i,sum=0;
    va_list args;
    va_start(args,n);
    for (i=0;i<n;i++) {
            sum += va_arg(args,int);
    }
    va_end(args);

    return ((float)sum) / n;

}

int main() {

    float av = average(6,1,2,3,4,5,8);

    printf("%f",av);

    return 0;
}

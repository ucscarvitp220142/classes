#include <stdio.h>

#define MAX_SIZE 10

#define maxn(a,b) a>b?a:b

#define maxs(a,b) a>b?"a":"b"

int main() {

    printf("The max size is: %d\n",MAX_SIZE);

    printf("Bigger type of int and float:%d\n",maxn(sizeof(int),sizeof(float)));

    printf("Bigger type of int and float:%s\n",(maxs(sizeof(int),sizeof(float))=="a"?"int":"float"));

    printf("Size of int is %d\n",sizeof(int));

    return 0;
}

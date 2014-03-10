#include <stdio.h>

typedef int Integer;

struct dev {
    int id;
    char *address;
};

typedef struct dev Device;

int main() {

    int i;

    Integer a;

    Device devices[10];

    for(i=0;i<10;i++) {
        devices[i].id = i;
        devices[i].address = "00:00:00:00";
    }

    scanf("%d",&a);

    printf("Device id:%d, address:%s\n",devices[a].id,devices[a].address);

    return 0;
}

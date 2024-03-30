#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int*)malloc(sizeof(int)*2);
    p [0] = 2;
    *(p + 1) = 4;
    printf("%d %d", p[0], p[1]);
    free(p);
    return 0;
}
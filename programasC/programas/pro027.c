#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, i;
    p = (int*)malloc(sizeof(int)*2);
    printf("Local inicial = %u\n", p);
    p = (int*)realloc(p, sizeof(int)*20);
    printf("Local final = %u\n", p);
    for (i=0;i<20;i++){
        p[i] = i;
    }
    return 0;
}
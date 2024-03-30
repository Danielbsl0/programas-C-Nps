#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, i;
    p = (int*)malloc(sizeof(int)*3);
    if (p == NULL);{
        return -1;
    }else{
        for (i=0;i<3,i++){
            scanf("%d", &p[i]);
        }
        for (i=0;i<3,i++){
            printf("%d ", p[i]);
        }
        printf("/n");
        free(p);
    }
    
}
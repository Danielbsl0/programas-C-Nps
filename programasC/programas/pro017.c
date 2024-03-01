#include <stdio.h>
int global = 1;
int imprima (){
    int global = 5;
    printf("%d", global);
}
int main(){
    printf("Global: %d\n", global);
    imprima();
}
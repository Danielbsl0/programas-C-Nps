//Ponteiro
#include <stdio.h>
int main (){
    printf("int = %d\n", sizeof(int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char = %d\n", sizeof(char));
    int x;
    int *p;
    p = &x;
    printf("%d", p+1);
}
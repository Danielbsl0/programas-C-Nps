#include <stdio.h>
int main(){
    int n;
    do{
        printf("Digite uma senha\n");
        scanf("%d", &n);
    }while (n != 2018);
    printf("Acertou!\n");
}
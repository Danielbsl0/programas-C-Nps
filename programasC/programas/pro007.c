#include <stdio.h>
/*if(condição){
    Códigos
}
*/
int main(){
    int a;
    scanf("%d", &a);
    if (a%2 == 0){
        printf("par\n");
    }
    if (a%2 != 0){
        printf("impar\n");
    }
}
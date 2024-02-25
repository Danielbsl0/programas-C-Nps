/*Operador E - &&
Operador OU - ||
*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if (x%2 == 0 || x > 0){
        printf("O numero e par ou e positivo\n");
    }
}
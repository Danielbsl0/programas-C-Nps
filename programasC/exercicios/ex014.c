#include <stdio.h>
int main(){
    int n[10], i, x;
    for (i=0;i<10;i++){
        scanf("%d", &n[i]);
    }
    scanf("%d", &x);
    for (i=0;i<10;i++){
        if (n[i] == x){
            printf("SIM");
            break;
        }else if (n[i] != x && i == 9){
            printf("NAO");
        }
    }
}
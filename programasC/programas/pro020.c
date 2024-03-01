#include <stdio.h>
int fatorial(int n){
    //Base n == 0, N! = 1
    if(n == 0){
        return 1;
    }
    return n*fatorial(n-1);
}
int main(){
    int n, fat;
    scanf("%d", &n);
    fat = fatorial(n);
    printf("fatorial de %d eh %d", n, fat);
}
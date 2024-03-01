#include <stdio.h>
int fibon(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return fibon(n-1) + fibon(n-2);
}
int main(){
    int n, fib;
    scanf("%d", &n);
    fib = fibon(n);
    printf("%d", fib);
}
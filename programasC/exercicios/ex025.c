/*
As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu bolar um desafio para você. Ele irá apertar os interruptores em uma certa sequência, e gostaria que você respondesse o estado final das lâmpadas 
A e B.
I = interruptor
A e B = lâmpadas
*/
#include <stdio.h>
#include <string.h>
int main(){
    int n, i, c, a = 0, b = 0;
    scanf("%d", &n);
    for (c=0;c<n;c++){
        scanf("%d ", &i);
        if (i == 1){
            if (a == 1){
                a = 0;
            }else{
                a = 1;
            }
        }
        if (i == 2){
            if (a == 1){
                a = 0;
            }else{
                a = 1;
            }
            if (b == 1){
                b = 0;
            }else{
                b = 1;
            }
        }
    }
    printf("%d\n%d", a, b);
    return 0;
}

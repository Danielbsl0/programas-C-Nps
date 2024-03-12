/*Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. O número de pontos participante é o tamanho da maior sequência de valores consecutivos iguais.*/ 
//Incompleto
#include <stdio.h>
#include <string.h>
int main(){
    int n, i, val, cc = 1, cc2 = 1, comp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &val);
        if (i==0){
            comp = val;
        }else{
            if (val == comp){
                cc++;
                if (i == n-1){
                    if (cc > cc2){
                        cc2 = cc;
                    }
                }
            }else if (val != comp){
                if (cc > cc2){
                cc2 = cc;
                }
                cc = 1;
                comp = val;
            }
        }
    }
    printf("%d", cc2);
}
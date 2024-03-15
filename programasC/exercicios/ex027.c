/*Dada a lista de acessos diários que ocorreram à página de Alice e Bia, escreva um programa para determinar quantos dias foram necessários para a soma dos acessos chegar a 1 milhão e as amigas ganharem o prêmio.*/
#include <stdio.h>
#include <string.h>
int main(){
    int n, a, i, ac = 0, d = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &a);
        ac = ac + a;
        if (ac >= 1000000 && d == 0){
            d = i+1;
        }
    }
    printf("%d", d);
}
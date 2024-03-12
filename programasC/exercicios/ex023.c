/*
Faça um programa para ler uma string S (sem espaços) e uma letra C. Seu programa deve imprimir a quantidade de vezes que a letra C aparece em S.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char s[50], c;
    int i, cont = 0;
    scanf("%s %c", s, &c);
    for (i=0;i<strlen(s);i++){
        if (s[i] == c){
            cont ++;
        }
    }
    printf("%d", cont);
    return 0;
}
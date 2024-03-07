/*Capacidade = 50
dado como entrada o número de alunos A e o número de monitores M, você deve escrever um programa que diga se é possível ou não levar todos os alunos e monitores em apenas uma viagem!
*/
#include <stdio.h>
int main(){
    int a, m;
    scanf("%d %d", &a, &m);
    if (a+m <=50){
        printf("S");
    }else{
        printf("N");
    }
}
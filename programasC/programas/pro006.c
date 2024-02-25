#include <stdio.h>
int main(){
    /*
    Caracteres especiais: 
    \n: Quebra de linha
    \t: Tabulação
    \\: Uma barra
    %%: Uma porcentagem
    Alinhamento:
    %[x]d: Alinhamento a direita com x espaços
    %[-x]d: Alinhamento a esquerda com x espaços
    %[0x]d: Alinhamento com zeros a esquerda com x espaços.
    Alinhamento:
    %.[x]f: Precisão de x. 
    */
    int a = 26;
    printf("%x", a);

}
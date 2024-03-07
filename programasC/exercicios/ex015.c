/*Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Se X aparece no vetor, imprima quantas vezes ele aparece e depois quais os índices que ele aparece. Se X não aparecer no vetor, imprima apenas a mensagem "Mia x". Lembre-se que a primeira posição de um vetor tem índice 0.*/
#include <stdio.h>
int main(){
    int n[10], i, x, cont;
    cont = 0;
    for (i=0;i<10;i++){
        scanf("%d", &n[i]);
    }
    scanf("%d", &x);
    for (i=0;i<10;i++){
        if (n[i] == x){
            cont += 1;         
        }
    }
    if (cont >0){
        printf("%d\n", cont);
        }
    for (i=0;i<10;i++){
            if (n[i] == x){
                printf("%d ", i); 
            }
    }
    if (cont == 0){
        printf("Mia x");
    }
}
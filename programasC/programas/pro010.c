#include <stdio.h>
int main(){
    float media;
    scanf("%f", &media);
    if (media >= 7){
        printf("Aluno aprovado\n");
    }else if(media <4){
        printf("Aluno reprovado\n");
    }else{
        printf("Aluno esta de Avaliacao final\n");
    }
}
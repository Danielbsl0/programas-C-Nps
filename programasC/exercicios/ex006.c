#include <stdio.h>
int main(){
    float n1, n2;
    scanf("%f%f", &n1, &n2);
    float media = (n1*2 + n2*3)/(2 + 3);
    if (media >= 7){
        printf("Aprovado\n");
    }else if(media >=3){
        printf("Final\n");
    }
    else{
        printf("Reprovado\n");
    }
}
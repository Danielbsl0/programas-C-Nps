//Estrutura switch
#include <stdio.h>
int main(){
    int id;
    scanf("%d", &id);
    switch(id){
        case 1:
            printf("papel\n");
            break;
        case 2:
            printf("tesoura\n");
            break;
        case 3:
            printf("cola\n");
            break;
        case 4:
            printf("caneta\n");
            break;
        default:
            printf("Identificador nao encontrado\n");
            break;
    }
}
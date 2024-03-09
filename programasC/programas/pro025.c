#include <stdio.h>
#include <string.h>
int main(){
    char n1[100] = "Daniel";
    if (strstr(n1, "ie") == NULL){
        printf("Nao tem\n");
    }else{
        printf("Tem\n");
    }
}
#include <stdio.h>
int main(){
    FILE *pont;
    int i;
    pont = fopen("pasta/arquivo.txt", "r");
    if (pont == NULL){
        printf("Nao abriu");
    }else{
        printf("Abriu\n");
        while (feof (pont) == 0){
            char s[20];
            fgets(s, 20, pont);
            printf("linha lida = %s\n", s);
        }
        fclose(pont);
    }
    return 0;
}
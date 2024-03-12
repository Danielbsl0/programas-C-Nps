#include <stdio.h>
#include <string.h>

int main(){
    char s[50], vog2[50] = "", cons2[50] = "";
    int i, len = 0;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vog2[strlen(vog2)] = s[i];
        } else {
            cons2[strlen(cons2)] = s[i];
        }
    }   
    printf("Vogais: %s\nConsoantes: %s", vog2, cons2);
    return 0;
}

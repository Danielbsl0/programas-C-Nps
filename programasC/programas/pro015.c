#include <stdio.h>
int main(){
    int i;
    for (i=0; i<6;i++){
        if (i == 2){
            break;
        }
        printf("%d\n", i);
    }
}
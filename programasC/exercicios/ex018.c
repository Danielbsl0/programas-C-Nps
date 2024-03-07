/*0 = esquerda
1 = direita
Você deve escrever um programa que, dadas as posições das portinhas P e R, neste flíper da figura, diga por qual dos três caminhos, A, B ou C, a bolinha vai cair!
*/
#include <stdio.h>
int main(){
    int p, r;
    scanf("%d %d", &p, &r);
    if (p == 1 && r == 1){
        printf("A");
    }else if(p == 1 && r == 0){
        printf("B");
    }else{
        printf("C");
    }
}
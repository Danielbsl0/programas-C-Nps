/*Seu programa deve produzir uma 
única linha, contendo um único inteiro.
Se a gangorra estiver equilibrada,
 imprima '0'. Se ela estiver 
 desequilibrada de modo que a criança
 esquerda esteja na parte de baixo, 
 imprima '-1', senão, imprima '1'.*/
#include <stdio.h>
int main(){
    int p1, p2, c1, c2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    if (p1*c1 == p2*c2){
        printf ("%d", 0);
    }else if (p1*c1 > p2*c2){
        printf ("%d", -1);
    }else{
        printf ("%d", 1);
    }
}
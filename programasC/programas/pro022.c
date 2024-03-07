#include <stdio.h>
int main(){
    int m[2][3], lin, col;
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;
    m[1][0] = 4;
    m[1][1] = 5;
    m[1][2] = 6;
    for (lin=0;lin<2;lin++){
        for (col=0;col<3;col++){
            scanf("%d", &m[lin][col]);
        }
    }
    for (lin=0;lin<2;lin++){
        for (col=0;col<3;col++){
            printf("%d ", m[lin][col]);
        }printf("\n");
    }
    return 0;
}
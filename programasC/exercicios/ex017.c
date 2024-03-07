#include <stdio.h>
int area(int l){
    return l*l;
}
int main(){
    int l;
    scanf("%d", &l);
    printf("%d", area (l));
    return 0;
}
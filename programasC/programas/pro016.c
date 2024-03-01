#include <stdio.h>
float soma(float a, float b){
    return a+b;
}
float media(float a, float b){
    return (a+b)/2.0;
}
int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%.2f\n", soma(x, y));
    printf("%2.f\n", media(x, y));
}
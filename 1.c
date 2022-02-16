#include <stdio.h>

int main(){
    int I,J,K,X,Y;
    double media;
    printf("Digite a idade da pessoa I: ");
    scanf("%d",&I);
    printf("Digite a idade da pessoa J: ");
    scanf("%d",&J);
    printf("Digite a idade da pessoa K: ");
    scanf("%d",&K);
    printf("Digite a idade da pessoa X: ");
    scanf("%d",&X);
    printf("Digite a idade da pessoa Y: ");
    scanf("%d",&Y);
    media=(I+J+K+X+Y)/5.0;
    printf("A media das idades eh: %.2lf",media);
    return 0;
}

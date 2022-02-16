#include <stdio.h>

int main(){
    double a,b,c,menor;
    printf("Digite o numero a: ");
    scanf("%lf",&a);
    printf("Digite o numero b: ");
    scanf("%lf",&b);
    printf("Digite o numero c: ");
    scanf("%lf",&c);
    menor=a;
    if(b<menor){
        menor=b;
    }
    if(c<menor){
        menor=c;
    }
    printf("O menor numero eh o: %lf",menor);
    
}

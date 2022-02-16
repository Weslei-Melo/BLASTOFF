#include <stdio.h>

int main(){
    int fatorial=1, a,i;
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &a);
    for(i = a; i > 1;i--)
    fatorial = fatorial *i;
    if(a<0){
       printf("Valor invalido!");
    }else{
        printf("\nFatorial calculado: %d", fatorial);
    }
   
    return 0;
}

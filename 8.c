#include <stdio.h>

int main(){
    int a,cont=0,i;
    printf("Digite um número: ");
    scanf("%d", &a);
 
     for (i = 2; i <= a/2; i++) {
        if (a % i == 0) {
           cont++;
           break;
        }
     }
     
     if (cont == 0 && a>1)
        printf("%d é um número primo", a);
     else
        printf("%d não é um número primo", a);
     
 
    return 0;
}

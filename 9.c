#include <stdio.h>

int main(){
    int a,i;
    printf("Digite um número: ");
    scanf("%d", &a);
 
     for (i = 0; i <= a; i++) {
        printf("%d x %d = %d\n",a,i,a*i);
     }
     
    return 0;
}

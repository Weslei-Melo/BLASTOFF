#include <stdio.h>

int main(){
    double A,B,C;
    printf("Digite a a distancia A em km: ");
    scanf("%lf",&A);
    printf("Digite a quantidade de combustivel gasta em l: ");
    scanf("%lf",&B);
    
    C=A/B;
    printf("Consumo medio foi de: %.2lf km/l",C);
    return 0;
}

#include<stdio.h>



int main(){
    int m,n,i,j;
    printf("Dado a dimensao de uma matriz MxN\nDigite o valor de M: "); 
    scanf("%d",&m);
    printf("Digite o valor de N: "); 
    scanf("%d",&n);
    int matriz[m][n];
    printf("Entre com os valores da matriz:"); 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    
  return 0;
}
#include <stdio.h>

int main(){
    int A[1000],B[1000],C[1000],num,i=0,j=0,tama=0,tamb=0,tamc=0;
    while(1){//preenche a primeira lista
        printf("Adicione o numero ou digite -1 para terminar a lista A: ");
        scanf("%d",&num);
        if(num==-1){
            break;
        }else{
            A[tama]=num;
        }
        tama++;
    }
    i=0;
    
    while(1){//preenche a segunda lista
        printf("Adicione o numero ou digite -1 para terminar a lista B: ");
        scanf("%d",&num);
        if(num==-1){
            break;
        }else{
            B[tamb]=num;
        }
        tamb++;
    }
   
   for(i=0;i<tama;i++){//cria a lista intersecao
       for(j=0;j<tamb;j++){
         if(A[i]==B[j]){
             C[tamc]=A[i];
             tamc++;
         }
       }
   }
   
    for(i=0;i<tamc;i++){
        if(i==0){
            printf("Lista Intersecao = [ %d",C[i]);
        }else{
            printf(", %d",C[i]);
        }
    }
    printf(" ]");
    return 0;
}

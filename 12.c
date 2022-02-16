#include <stdio.h>

int main(){
    int A[1000],B[1000],C[2000],num,i=0,j=0,tama=0,tamb=0,tamc=0;
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
    //nesse exercicio eu entendi como contenacao, sendo a uniao das duas listas, onde a lista resultante pode ter valores repetidos
   tamc=tama+tamb;
   for(i=0;i<tamc;i++){//cria a lista Concatenada
       if(i<tama){
           C[i]=A[i];
       }else{
           C[i]=B[i-tama];
       }
   }
 
    for(i=0;i<tamc;i++){
        if(i==0){
            printf("Lista Concatenada = [ %d",C[i]);
        }else{
            printf(", %d",C[i]);
        }
    }
    printf(" ]");
    return 0;
}

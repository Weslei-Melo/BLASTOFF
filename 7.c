#include <stdio.h>

int main(){
    int A[1000],num,i=0,j=0,B[1000],tamb=0;
    while(1){
        printf("Adicione o numero ou digite -1 para terminar a lista: ");
        scanf("%d",&num);
        if(num==-1){
            break;
        }else{
            A[i]=num;
        }
        i++;
    }
    for(j=0;j<i;j++){
        if(A[j]%2==0){
            B[tamb]=A[j];
            tamb++;
        }
    }
    i=0;
    for(i=0;i<tamb;i++){
        if(i==0){
            printf("Vetor Par = [ %d",B[i]);
        }else{
            printf(", %d",B[i]);
        }
    }
    printf(" ]");
    
    return 0;
}

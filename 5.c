#include <stdio.h>

int main(){
    int a,b,aa,bb;
    printf("Digite o numero a : ");
    scanf("%d",&a);
    printf("Digite o numero b : ");
    scanf("%d",&b);
    //criei as variaveis aa e bb para garatir que verifique numeros negativos 
    aa=a;
    bb=b;
    if(a<0){
        aa=a*-1;
    }
    if(b<0){
        bb=b*-1;
    }
    if(a==0 || b==0){// se algum dos numeros for nulo
        printf("os numeros %d e %d nao sao multiplos.",a,b);
    }else{
        if((aa>bb) && (aa%bb==0)){
            printf("os numeros %d e %d  sao multiplos.",a,b);
        }else{
            if((bb>aa) && (b%aa==0)){
                printf("os numeros %d e %d  sao multiplos.",a,b);
            }else{
                printf("os numeros %d e %d nao sao multiplos.",a,b);
            }
        }
    }
    
        
    
    return 0;
}

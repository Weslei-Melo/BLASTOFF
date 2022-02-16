#include<stdio.h>



int main(){
    double inicial,final;
    printf("Digite a hora inicial: "); 
    scanf("%lf",&inicial);
    
    printf("Digite a hora final: "); 
    scanf("%lf",&final);
    
    if(inicial<final){
        inicial-=final;
        inicial*=-1;
        inicial=24-inicial;
        printf("Hora eh igual a %.2lf do dia anterior",inicial);
    }else{
        inicial-=final;
         printf("Hora eh igual a %.2lf do mesmo dia",inicial);
    }
    
    
  return 0;
}
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>

// funcao que converte uma string para minúsculo
//criei essa funcao pois notei que no exemplo ele considera que Ana eh palindrome 
//apesar de comecar com letra maisucula
void minusculo(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){// caracteer que indica o fim da string
        s1[i] = tolower(s1[i]);
        i++;
    }
    s1[i] = '\0'; // caracteer que indica o fim da string
}
   

int main(){
  char palavra[1000],palavra1[1000];
  int i,tamp=0,aux;
  
  printf("Digite uma palavra: ");
  scanf("%s",palavra);
  
 
  tamp=strlen(palavra);//tamanho da palavra
  for(i=0;i<=tamp;i++){//Para armazenar o valor orginal da palavra com letras maisuculas e minusculas se for o caso
      palavra1[i]=palavra[i];
  }
  minusculo(palavra);//chama a funcao que converte para minusculo
  aux=tamp-1;
  for(i=0;i<tamp/2;i++){//verifica letra por letra 
      if(palavra[i]!=palavra[aux]){
          printf("A palavra %s nao eh palindrome.",palavra1);
          aux=-1;//indica que a palavra nao eh palindrome
          break;
      }else{
          aux--;
      }
  }
  if(aux!=-1){
      printf("A palavra %s  eh palindrome.",palavra1);
  }
  getch();
  return 0;
}
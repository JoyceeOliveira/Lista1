#include <stdio.h>

int main(){
  
  char aux;
  char nome[] = "Ponteiros" ;
  char *p3;		
  
   /* (e) */
  
  p3 =nome;
  printf("%c \n", *p3);
  
  return 0;
}

// O código se tornará válido ao transformar a linha [char *nome = "Ponteiros";] para uma string da seguinte maneira:
// [char nome[]="Ponteiros";]
// Sendo assim mostrando o esperado na tela imprimindo o valor  de forma automática da posição [0] na tela (P)

#include<stdio.h>

int main(){
  char aux;
  char nome[] = "Ponteiros" ;
  char *p3;		
	 
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); 
	 
  return 0;
}

// O código se tornará válido ao transformar a linha [char *nome = "Ponteiros";] para uma string da seguinte maneira:
// [char nome[]="Ponteiros";]
// Sendo assim mostrando o esperado na tela imprimindo o valor da posição [4] na tela (e)

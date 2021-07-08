#include <stdio.h>


int main(){

  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (h) */
  
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  
  return 0;
  
}

// Pelo que foi executado pelo programa, quando dizemos que p4 = vetor, está fazendo p4 apontar para o primeiro valor do vetor {vetor[0]}.

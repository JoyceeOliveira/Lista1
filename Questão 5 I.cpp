#include <stdio.h>

int main(){
	

  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  
 //---- letra i----//
  
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  p5 = p4+1;
  idade= *p5;
  printf("%d \n", idade);	
	
	return 0;	
}

//o código vai imoprimir 45, pois anteriormente o ponteiro apontava pra primeiro valor do vetor, como o código 
// ele mandou avançar uma posição do vetor, o ponteiro imprimiu na tela o valor da segunda posição do vetor, ou seja, vetor[1]

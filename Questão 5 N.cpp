#include <stdio.h>

int main(){
	

  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  
 //---- letra j----//
  
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  p5 = p4+1;
  p4 = p5+1;
  idade= *p4;
  p5= &vetor[2]-1;
  p5++;
  printf("%d \n", *p5);	
	
	return 0;	
}
// O p++ anula o -1 da linha acima, fazendo printar o vetor na posição 2, vetor[2]=27 

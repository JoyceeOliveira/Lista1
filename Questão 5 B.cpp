#include <stdio.h>

int main(){
  
  float temp;
  float *p2;

/* (b) */

  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
  
  return 0;	
}

// o codigo é semelhante ao da letra a, a diferença aparece no momento em que se padroniza a execução do valor real para apenas uma casa após a vírgula
// o código compila como esperado



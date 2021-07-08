#include <stdio.h> // 1º Erro - Faltou colocar a(s) biblíotecas

int main() {
  int valor;
  int *p1;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  
 return 0;
 
}

/*  neste cod foi criado uma variável do tipo inteiro (valor) e um ponteiro (p1) para apontar o endereço (ou indiretamente o valor armazenado na variável "valor")
    tendo o valor modificado indiretamente e imprimindo o valor 20
    Aconteceu o que esperávamos (codigo retornando o valor 20) */
    
    
     

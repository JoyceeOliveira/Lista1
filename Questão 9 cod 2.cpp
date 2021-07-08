#include<stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
  
  return 0;
}

// esse código ele cria um vetor de 3 posições v, vet[0], vet[1], vet[2], um contador
// em seguida ele faz um laço de repetição usando o i pra contar e reproduzir na tela os endereços 
// que estão alocados os valores do respectivo vetor criado

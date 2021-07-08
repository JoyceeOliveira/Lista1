//Questão 2 Lista
#include <stdio.h>

int main(){
	
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;


	printf("\n O valor do enderecamento do ponteiro de i vale: %p ", p); // ele quer mostrar o slot da memmória ou quer o resultado da variável de forma indireta ? 
	printf("\n O resultado para a operacao entre os conteudos dos ponteiros p e q vale: %d", *p-*q);
	printf("\n O conteudo do conteudo do enderecamento de p vale %d:", *p);
	printf("\n O valor da equaca pedida na questao vale: %i",3-(*p/(*q))+7);
	
	return 0;
}

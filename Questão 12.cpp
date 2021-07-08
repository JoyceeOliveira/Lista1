/* Os ponteiros são usados para armazenar todo tipo de informação, os ponteiros para função armazenam 
onde as funções ficam na memória virtual, eles guardam edereços de áreas de código.
Isto é, ponteiro pra função é um tipo de ponteiro que possibilita utilizar ponteiros para chamada de funções. 
Isso é possível porque as funções possuem endereço fixo,  também chamado de ponto de entrada da função. 
Deste modo, um ponteiro para função deve ser declarado conforme a assinatura da função que será chamada.
*/


#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int x, int y){
		return (x * y); // funçao multiplicação
}
int main(){ 
	int(*p)(int, int)=multiplicacao; // (*p)() ponteiro para função e ponteiro recebe função multiplicacao
	int w, x = 2, y = 3; 
	w = p(x,y);
	printf("%d", w);
		return 0;
}

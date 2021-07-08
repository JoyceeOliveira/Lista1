#include <stdio.h>

int main(){
	
	int mat[4], *p, x;
	
	p= mat +1; // é verdadeiro, pois está pintando o endereço do vetor mat + 1;
	//printf("%p", p ); //teste da validade da primeira sentença 
	
	p= mat; // é verdadeiro, pois está pintando o endereço do vetor mat
	//printf("%p", p); //teste da validade da segunda sentença 
	
	p = ++ mat; // falso, pois causa erro de compilação (motivo: não é permitido o incremento de endereços de vetores) 
	//printf("%p", p); //teste da validade da terceira sentença
	
	x= (*mat); // é verdadeiro, pois associa o valor do conteúdo de mat à x.
	printf("%d", x); //teste da validade da quarta sentença
	
		
	return 0;
}

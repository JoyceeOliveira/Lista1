#include <stdio.h>

int main(){

	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;	
	
	aloha[2] = value; // válido, pois printa um valor em float 
	
	printf("%d", value);
	printf("\n");
	scanf("%f", &aloha); //válido, pois printa um valor em float
	printf("%d", aloha);	
	printf("\n");
	//aloha = "value"; // inválido, pois aloha é uma variável do tipo float e não char
	//printf("%s", aloha);
	printf("%f", aloha); // é válido, pois imprime um valor float, sendo compatível com a variável declarada no escopo 
	printf("\n");
	coisas[4][4] = aloha[3]; // é valido, pois está associando o valor de coisas linha 11 e coluna 6 com o elemnto da posição 3 de aloha
	printf("%f", aloha[3]);
	printf("\n");
	// coisas[5] = aloha; //inválido, pois nao referencia a posição de aloha que deseja igualar ao valor de coisas[5]
	//printf("%f", aloha);
	//printf("\n");
	//pf = value; // está mal declarado, por isso se torna uma alternativa falsa
	//printf("%d", pf);
	pf = aloha; // compila, mas n entrega nada
	printf("%x", pf);
	return 0;	
	
	
}

// pra vc verificar os cods vc precisa deixar cada linha como comentada e ir testando linha por linha e verificar se existe algum erro que deixei passar




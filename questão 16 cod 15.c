#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void cria_triangulacao (float *vetor, int i, int f){
    int auxiliar = vetor[i]; // definindo vetor auxiliar como a primeira posição do vetor (posição inicial)
    int j = i * 2 + 1; // primeiro ramo
    while(j <= f){ // enquanto o valor final for maior ou iagual ao primeiro ramo
        if(j<f){   // quando o primeiro ramo form menor que o valor final
            if(vetor[j] < vetor[j+1]){ // o primeiro ramo tem mais dois ramos ? qual o meior ?
                j = j+1;
            }
        }
        if(auxiliar < vetor[j]){ // ramo secundário maior que o ramo prioncipal ?
            vetor[i] = vetor[j]; // então o ramo secundário se torna o ramo principal
            i = j;               //    (...)
            j= 2*i+1;            // Repetir o processo
        }else{
            j= f +1;
        }
    }
    vetor[i] = auxiliar; // antigo ramo principal ocupa o lugar do último ramo analizado

}

void triangular (float *vetor, int n){
    int i, auxiliar;
    for(i= (n-1)/2; i>=0; i--){
        cria_triangulacao(vetor, i, n-1);
    }
    for(i = n-1; i>=1; i--){
        auxiliar = vetor[0]; //  Pegar o maior elemento
        vetor[0]= vetor[i] ; //  e colar na sua devida posição
        vetor[i] = auxiliar; //  no vetor

        cria_triangulacao(vetor, 0, i-1); // Refazendo a triangulação
    }
}

int main() {

    int i,n; //vairáveis da alocação de vetores
    float *x, (*ordena_ai)();
    ordena_ai = triangular;

    clock_t Ticks[2];
    Ticks[0] = clock();

    printf("Digite aqui o valor que desejas para n:"); // Interação com usuário para descobrir o tamano do vetor desejado
    scanf("%d", &n);

    x = malloc(n * sizeof(float)); //alocando vetor

    for (i = 0; i < n; i++) { //Processo de inserção dos valores que desejam ser alocados
        printf("Digite o valor de numero %d\n",i+1);
        scanf("%f", &x[i]);
    }

    for (i = 0; i < n; i++) {  // Impressão na tela do vetor em seu estado original
        printf("[%.1f] ",x[i]);
    }

    printf("\n");// apenas para estética de apresentação

    ordena_ai(x,n);
    for (i=0; i<n; i++){
        printf ("[%.1f] ", x[i]);
    }
    free(x);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms.", Tempo);
    getchar();

    return 0;
}

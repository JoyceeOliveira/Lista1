#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int compare (const void * a, const void * b)
{
    if(*(float *)a > *(float *)b){
        return 1;
    }

    else if (*(float *)a < *(float *)b){
        return -1;
    }

    else{
        return 0;
    }
    //return( *(float*)a - *(float*)b);
}

int main(void){
    int i,n; //vairáveis da alocação de vetores
    float *x;

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

    qsort ( x, n, sizeof(float), compare);
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


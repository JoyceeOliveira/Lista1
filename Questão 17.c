#include <stdio.h>
#include <stdlib.h>

void somavetor(float *x, float *y, float *z, int n){
    int k;
    for(k=0;k<n;k++){
        z[k]= x[k] + y[k];
    }
}

int main(void) {
    float *x,*y,*z;
    int n;

    printf("Digite aqui o valor para o tamanho do vetor [n]: ");
    scanf("%d", &n);

    x = malloc(n * sizeof(float)) ;
    y = malloc(n * sizeof(float)) ;
    z = malloc(n * sizeof(float)) ;

    int k;

    for(k=0;k<n;k++){
        printf("Valor para primeira matriz: ");
        scanf("%f", &x[k]);
    }

    for(k=0;k<n;k++){
        printf("Valor para segunda matriz: ");
        scanf("%f",&y[k]);
    }

    somavetor(x,y,z,n) ;
    for(int i=0; i<n; i++){
        printf("%.1f ", z[i]);
    }

    free(x);
    free(y);
    free(z);

    return 0;
}

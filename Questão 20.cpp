#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gc/gc.h>
#include <time.h>

int main(void)
{

    int i;
    const int size = 10000000;
    clock_t t_i, t_f;

    t_i = clock();
    GC_MALLOC();
    for (i = 0; i < size; ++i){
        int **p = GC_MALLOC(sizeof(int));
    }
    t_i = clock() - t_i;
    printf("%f segundos", ((float)t_i)/CLOCKS_PER_SEC);

    t_f = clock();
    for (i = 0; i < size; ++i){
        int **q = malloc(sizeof(int));
        free(q);
    }

    t_f = clock() - t_f;
    printf("%f segundos", ((float)t_f)/CLOCKS_PER_SEC);

    return 0;
}

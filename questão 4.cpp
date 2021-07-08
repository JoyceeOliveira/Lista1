/*Quest�o 4: Se "i" e "j" s�o vari�veis e "p" e "q" ponteiros int. Quais das seguintes express�es de atribui��o s�o ilegais?

#include <stdio.h>

int main(){

 int i, j, *p, *q;
 int a,b;
 
 a=1;
 b=2;

 p= &i;
 q= &j;

 printf(" o endere�o de i fica em: %p", p);
 printf("O valor da vari�vel i sendo acessada indiretamente com o ponteiro �: %d", *p);
 printf(" o endere�o de j fica em: %p", q);
 printf("O valor da vari�vel j sendo acessada indiretamente com o ponteiro �: %d", *q);

 i = a+b^2;
 j= 7;
 printf("o valor de i: %i", i);
 //ele vai retornar na tela 5

 (....)

 i = *q; 
 printf("o valor de i: %i", i");
 //ele vai retornar na tela 7
 

 return 0;
}


a) p= &i; � verdadeiro, pois � o processo de vincula��o do ponteiro p com a vari�vel i

b) *q=&j; � falso, pois estamos vinculando o conte�do do ponteiro com ele mesmo (valor de j)

c) p = &*&i; � verdadeiro, pois est� vinculando o ponteiro p com o endere�o do conte�do do endere�o de i

d) i= (*&)j; � falso, pois seria v�lido apenas se n�o estivesse com *& entre par�nteses"(*&)", sendo assim um erro de digita��o

e) i= *&j; � verdadeiro, por�m seria mais eficiente e interessante fazer i=j

f) i= &&j; � falso, pois o endere�o de uma vari�vel � printada com "%p" enquanto a vari�vel i ser� printada com "%d"/ou"i". Sendo assim, tipos diferentes causando essa incompatibilidade

g) q = *p; � Falso, pois o endere�o do conte�do � um tipo de vari�vel e o conte�do da variavel apontada pelo ponteiro � outro

h) i = (*p)++ + *q; � verdadeiro, pois os conte�dos dos ponteiros p e q s�o do mesmo tipo da vari�vel i e j. Sendo assim, validando essa senten�a.
*/

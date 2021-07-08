 /* Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de 
					x+1, x+2 e x+3 se:
 x for declarado como char?x + 1 = 4092 + 1 * 1 = 4093; x + 2 = 4092 + 2 * 1 = 4094; x + 3 = 4092 + 3 * 1 = 4095;   (1 byte)
 x for declarado como int? x + 1 = 4092 + 1 * 2 = 4094; x + 2 = 4092 + 2 * 2 =4096; x + 3 = 4092 + 3 * 2 = 4098;    (2 bytes)
 x for declarado como float? x + 1 = 4092 + 1 * 4 = 4096; x + 2 = 4092 + 2 * 4 = 4100; x + 3 = 4092 + 3 * 4 = 4104; (4 bytes)
 x for declarado como double? x + 1 = 4092 + 1 * 8 = 4100; x + 2 = 4092 + 2 * 8 = 4108; x + 3 = 4092 + 3 * 8 = 4116;(8 bytes)



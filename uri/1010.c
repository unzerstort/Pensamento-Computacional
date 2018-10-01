#include <stdio.h>

int main (void) {
	int codigopeca1, codigopeca2, numeropecas1, numeropecas2;
	double valorpeca1, valorpeca2, pagarvalor;

	printf("Insira os codigos das pecas, suas quantidades e seu valor: \n");
	scanf("%d %d %lf\n", &codigopeca1, &numeropecas1, &valorpeca1);
	scanf("%d %d %lf", &codigopeca2, &numeropecas2, &valorpeca2);

	pagarvalor = (numeropecas1 * valorpeca1) + (numeropecas2 * valorpeca2);

	printf("Valor a pagar: R$ %.2lf\n", pagarvalor);

	return 0;
}

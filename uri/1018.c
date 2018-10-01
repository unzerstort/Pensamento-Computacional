#include <stdio.h>

int main (void){
	int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	

	scanf("%d", &valor);
	
	printf("%d\n", valor);
	//notas de 100
	notas100 = valor/100;
	valor = valor - (notas100 * 100);
	printf("%d nota(s) de R$ 100,00\n", notas100);

	//notas de 50
	notas50 = valor/50;
	valor = valor - (notas50 * 50);
	printf("%d nota(s) de R$ 50,00\n", notas50);

	//notas de 20
	notas20 = valor/20;
	valor = valor - (notas20 * 20);
	printf("%d nota(s) de R$ 20,00\n", notas20);

	//notas de 10
	notas10 = valor/10;
	valor = valor - (notas10 * 10);
	printf("%d nota(s) de R$ 10,00\n", notas10);

	//notas de 5
	notas5 = valor/5;
	valor = valor - (notas5 * 5);
	printf("%d nota(s) de R$ 5,00\n", notas5);

	//notas de 2
	notas2 = valor/2;
	valor = valor - (notas2 * 2);
	printf("%d nota(s) de R$ 2,00\n", notas2);

	//notas de 1
	notas1 = valor/1;
	valor = valor - (notas1 * 1);
	printf("%d nota(s) de R$ 1,00\n", notas1);

	return 0;

}

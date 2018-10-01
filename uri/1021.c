#include <stdio.h>
#include <math.h>

int main (void){
	double valor;
	int notas100, notas50, notas20, notas10, notas5, notas2;
	int moedas1, moedas50, moedas25, moedas10, moedas05, moedas01;

	scanf("%lf", &valor);
	
	printf("NOTAS:\n");
	//notas de R$100
	notas100 = valor/100;
	valor = valor - (notas100 * 100);
	printf("%d nota(s) de R$ 100.00\n", notas100);

	//notas de R$50
	notas50 = valor/50;
	valor = valor - (notas50 * 50);
	printf("%d nota(s) de R$ 50.00\n", notas50);

	//notas de R$20
	notas20 = valor/20;
	valor = valor - (notas20 * 20);
	printf("%d nota(s) de R$ 20.00\n", notas20);

	//notas de R$10
	notas10 = valor/10;
	valor = valor - (notas10 * 10);
	printf("%d nota(s) de R$ 10.00\n", notas10);

	//notas de R$5
	notas5 = valor/5;
	valor = valor - (notas5 * 5);
	printf("%d nota(s) de R$ 5.00\n", notas5);

	//notas de R$2
	notas2 = valor/2;
	valor = valor - (notas2 * 2);
	printf("%d nota(s) de R$ 2.00\n", notas2);

	printf("MOEDAS:\n");
	
	//moedas de R$1
	moedas1 = valor/1;
	valor = valor - (moedas1 * 1);
	printf("%d moeda(s) de R$ 1.00\n", moedas1);

	//moedas de R$0.50
	moedas50 = valor/0.50;
	valor = valor - (moedas50 * 0.50);
	printf("%d moeda(s) de R$0.50\n", moedas50);
		
	//moedas de R$0.25
	moedas25 = valor/0.25;
	valor = valor - (moedas25 * 0.25);
	printf("%d moeda(s) de R$0.25\n", moedas25);
	
	//moedas de R$0.10
	moedas10 = valor/0.10;
	valor = valor - (moedas10 * 0.10);
	printf("%d moeda(s) de R$0.10\n", moedas10);
	
	//moedas de R$0.05
	moedas05 = valor/0.05;
	valor = valor - (moedas05 * 0.05);
	printf("%d moeda(s) de R$0.05\n", moedas05);

	//moedas de R$0.01
	moedas01 = ceil(valor/0.01);
	valor = valor - (moedas01 * 0.01);
	printf("%d moeda(s) de R$0.01\n", moedas01);


	return 0;

}

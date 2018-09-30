#include <stdio.h>

int main (void){
	char name[15];
	double salariofixo, totalvendas, salariototal;

	printf("Primeiro nome do vendedor: ");
	scanf("%s", name);
	printf("Salario fixo: ");
	scanf("%lf", &salariofixo);
	printf("Montante de vendas: ");
	scanf("%lf", &totalvendas);

	salariototal = salariofixo + (totalvendas * 0.15);

	printf("Total: R$ %.2lf\n", salariototal);

	return 0;
	
}

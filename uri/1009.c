#include <stdio.h>

int main (void){
	char name[15];
	double salariofixo, totalvendas, salariototal;

	scanf("%s", name);
	scanf("%lf", &salariofixo);
	scanf("%lf", &totalvendas);

	salariototal = salariofixo + (totalvendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", salariototal);

	return 0;
	
}

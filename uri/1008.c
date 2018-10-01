#include <stdio.h>

int main (void){
	int numero, horas;
	float valorhora, salario;

	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%f", &valorhora);

	salario = horas * valorhora;

	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2f\n", salario);

	return 0;

}

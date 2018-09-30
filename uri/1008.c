#include <stdio.h>

int main (void){
	int numero, horas;
	float valorhora, salario;

	printf("Numero do funcionario: ");
	scanf("%d", &numero);
	printf("Horas trabalhadas: ");
	scanf("%d", &horas);
	printf("Valor recebido por hora trabalhada: ");
	scanf("%f", &valorhora);

	salario = horas * valorhora;

	printf("Numero: %d\n", numero);
	printf("Salario: U$ %.2f\n", salario);

	return 0;

}

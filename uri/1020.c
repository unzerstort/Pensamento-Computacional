#include <stdio.h>

int main (void){
	int valor, ano, mes, dia;
	
	scanf("%d", &valor);

	ano = valor/365;
	mes = (valor%365)/30;
	dia = (valor%365)%30;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);

	return 0;
}

#include <stdio.h>

int main(void){
	int valor1, valor2;

	while(valor1 != valor2){
		scanf("%d %d", &valor1, &valor2);

		if(valor1 > valor2){
			printf("Decrescente\n");

		}else if (valor2 > valor1){
			printf("Crescente\n");
		}
	}

	return 0;
}

#include <stdio.h>

int main(void){
	int soma = 0, i, valor1, valor2;

	scanf("%d%d", &valor1, &valor2);

	if(valor1 < valor2){
		for(i = valor1 + 1; i < valor2; i++){
			if(i % 2 != 0){
				soma += i;
			}
		}

		printf("%d\n", soma);

	}else{
		for(i = valor2 + 1; i < valor1; i++){
			if(i % 2 != 0){
				soma += i;

			}
		}

		printf("%d\n", soma);
	}

	return 0;

}

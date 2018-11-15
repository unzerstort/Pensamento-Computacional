#include <stdio.h>

int main(void){
	int numero, i, quadrado;

	scanf("%d", &numero);

	for(i = 1; i <= numero; i++){
		if(i % 2 == 0){
			quadrado = i*i;
			
			printf("%d^2 = %d\n", i, quadrado);
		}

	}

	return 0;

}

#include <stdio.h>

int main(void){
	int numero, produto, i;

	scanf("%d", &numero);

	for(i = 1; i <= 10; i++){
		produto = numero * i;
		
		printf("%d x %d = %d\n", i, numero, produto);
	}

	return 0;
}

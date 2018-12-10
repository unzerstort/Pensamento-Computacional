#include <stdio.h>

int fatorial(int numero);

int main(void){
	int n, fat;

	scanf("%d", &n);
	fat = fatorial(n);

	printf("%d! = %d\n", n, fat);

	return 0;	
}

int fatorial(int numero){
	int i, resultado = 1;

	if(numero > 0){
		for(i = 1; i <= numero; i++){
			resultado = resultado * i;
		}
	}

	return resultado;
}



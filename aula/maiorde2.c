#include <stdio.h>

int maior(int a, int b);

int main(){
	int num1, num2, comparacao;

	printf("Insira dois valores: ");	
	scanf("%d %d", &num1, &num2);
	comparacao = maior(num1, num2);
	printf("Maior valor: %d\n", comparacao);

	return 0;
}


int maior(int a, int b){
	int resultado = 0;

	if(a > b){
		resultado = a;
	
	}else{
		resultado = b;
	}

	return resultado;
}

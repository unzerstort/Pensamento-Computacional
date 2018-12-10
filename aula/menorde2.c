#include <stdio.h>

int menor(int a, int b);

int main(){
	int num1, num2, comparacao;

	printf("Insira dois valores: ");
	scanf("%d %d", &num1, &num2);

	comparacao = menor(num1, num2);
	printf("O menor valor é: %d\n", comparacao);

	return 0;
}

int menor(int a, int b){
	int resultado = 0;

	if(a < b){
		resultado = a;
	
	}else{
		resultado = b;
	}

	return resultado;
}

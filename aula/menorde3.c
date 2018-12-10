#include <stdio.h>

int menor(int a, int b, int c);

int main(){
	int num1, num2, num3, comparacao;

	printf("Insira tres valores: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	comparacao = menor(num1, num2, num3);
	printf("O menor valor é: %d\n", comparacao);

	return 0;
}

int menor(int a, int b, int c){
	int resultado;

	if(a < b && a < c){
		resultado = a;
	
	}else if(b < a && b < c){
		resultado = b;

	}else if(c < a && c < b){
		resultado = c;
	}

	return resultado;
}

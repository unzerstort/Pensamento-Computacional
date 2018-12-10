#include <stdio.h>

int maior(int a, int b, int c);

int main(){
	int num1, num2, num3, comparacao;

	printf("Insira tres valores: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	comparacao = maior(num1, num2, num3);
	printf("Maior valor: %d\n", comparacao);

}

int maior(int a, int b, int c){
	int resultado = 0;

	if(a > b && a > c){
		resultado = a;

	}else if(b > a && b > c){
		resultado = b;
	
	}else if(c > a && c > b){
		resultado = c;
	}

	return resultado;
}

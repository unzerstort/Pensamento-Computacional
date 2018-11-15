#include <stdio.h>

int main (void){
	int i, entrada, maior = 0, posicao = 0;  

	for(i = 1; i <= 100; i++){
		scanf("%d", &entrada);

		if(entrada > maior){
			maior = entrada;
			posicao = i;
		}
	}

	printf("%d\n%d\n", maior, posicao);

	return 0;
}

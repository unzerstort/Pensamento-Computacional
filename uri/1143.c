#include <stdio.h>

int main(void){
	int valor, quadrado , cubo, i;

	scanf("%d", &valor);

	for(i = 1; i <= valor; i++){
		quadrado = i*i;
		cubo = i*i*i;
		printf("%d %d %d\n", i, quadrado, cubo);
	}

	return 0;
}

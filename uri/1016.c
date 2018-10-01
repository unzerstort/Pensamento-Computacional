#include <stdio.h>

int main (void){
	int x = 60, y = 90, distancia;
	float tempo;

	scanf("%d", &distancia);
	tempo = (60 * distancia)/30;

	printf("%.0f minutos\n", tempo);

	return 0;

}

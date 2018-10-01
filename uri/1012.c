#include <stdio.h>

int main (void){
	double valor1, valor2, valor3, pi;
	pi = 3.14159;

	scanf("%lf %lf %lf", &valor1, &valor2, &valor3);

	double triangulo = (valor1 * valor3)/2;
	double circulo = pi * valor3 * valor3;
       	double trapezio = ((valor1 + valor2)*valor3)/2;
	double quadrado = valor2 * valor2;
	double retangulo = valor1 * valor2;

	printf("TRIANGULO: %.3lf\n", triangulo);
	printf("CIRCULO: %.3lf\n", circulo);
	printf("TRAPEZIO: %.3lf\n", trapezio);
	printf("QUADRADO: %.3lf\n", quadrado);
	printf("RETANGULO: %.3lf\n", retangulo);

	return 0;
}

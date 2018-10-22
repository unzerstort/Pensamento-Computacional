#include <stdio.h>

int main(void){
	float a, b, c, perimetrotriangulo, areatrapezio;

	scanf("%f %f %f", &a, &b, &c);

	if(a < b + c && b < a + c && c < a + b){
		perimetrotriangulo = a + b + c;
		printf("Perimetro = %.1f\n", perimetrotriangulo);

	}else{
		areatrapezio = ((a + b) * c)/2;
		printf("Area = %.1f\n", areatrapezio);
	
	}

	return 0;

}

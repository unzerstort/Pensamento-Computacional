#include <stdio.h>
#include <math.h>

int main (void){
	double a, b, c, delta, R1, R2;

	scanf("%lf %lf %lf", &a, &b, &c);

	delta = pow(b,2) - (4*a*c);

	if ( a != 0 && delta >= 0 ){
		R1 = (-b + sqrt(delta))/(2*a);
                R2 = (-b - sqrt(delta))/(2*a);
                
                printf("R1 = %.5lf\n", R1);
                printf("R2 = %.5lf\n", R2);
		
	}else{
		printf("Impossivel calcular\n");
	}

	return 0;
}

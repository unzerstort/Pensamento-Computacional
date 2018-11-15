#include <stdio.h>

int main (void){
	int casos, i;
	float nota1, nota2, nota3, mediap;

	scanf("%d", &casos);

	for(i = 1; i <= casos; i++){
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		mediap = ((nota1 * 2) + (nota2 * 3) + (nota3*5))/10;
		printf("%.1f\n", mediap);
	}

	return 0;
}

	

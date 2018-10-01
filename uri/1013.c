#include <stdio.h>
#include <stdlib.h>

int main (void){
	int A, B, C;
	double maiorAB, maiorABC;

	scanf("%d %d %d",&A, &B, &C);

	maiorAB = (A + B + abs(A - B))/2;
	maiorABC = (maiorAB + C + abs(maiorAB - C))/2;

	printf("%.0lf eh o maior\n", maiorABC);

	return 0;

}
